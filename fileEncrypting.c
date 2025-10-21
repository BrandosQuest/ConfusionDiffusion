#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LikedListExperiment.h"

#define ITERATIONS 223

void printaFile(int * a) {
    printf("array: ");
    fflush(stdout);
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[3-i]);
        fflush(stdout);
    }
    printf("\n");
    fflush(stdout);
}
void arrayOfIndexesAllPossibleCombinationsFile(int a[4], int k) {
    //an iterative way to get the n shuffle of 4 elements
    int counter=0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j==i)
                continue;
            int count=0;
            for (int l = 0; l < 4; ++l) {
                if (l==j || l==i)
                    continue;
                if (counter==k%24){
                    if (count==0) {
                        a[0]=i;
                        a[1]=j;
                        a[2]=l;
                        for (int m = 0; m < 4; ++m) {
                            if (m==l || m==j || m==i)
                                continue;
                            a[3]=m;
                        }
                    }else {
                        a[0]=i;
                        a[1]=j;
                        a[2]=l;
                        for (int m = 3; m >= 0; --m) {
                            if (m==l || m==j || m==i)
                                continue;
                            a[3]=m;
                        }
                    }
                }
                count++;
                counter++;
            }
        }
    }
}
void substitutionProperAlgoFile(int * a, int k ) {
    //for the key k we generate the indexes of the 2 bit combination corresponding
    int c[4]={0};
    unsigned char TwoBitCombinations[4][2]={{0,0}, {0,1}, {1,0},{1,1}};
    arrayOfIndexesAllPossibleCombinationsFile(c, k);
    switch ((a[0]*10)+a[1]) {
        case 0://00
            a[0]=TwoBitCombinations[c[0]][0];
            a[1]=TwoBitCombinations[c[0]][1];
            break;
        case 1://01
            a[0]=TwoBitCombinations[c[1]][0];
            a[1]=TwoBitCombinations[c[1]][1];
            break;
        case 10://10
            a[0]=TwoBitCombinations[c[2]][0];
            a[1]=TwoBitCombinations[c[2]][1];
            break;
        case 11://11
            a[0]=TwoBitCombinations[c[3]][0];
            a[1]=TwoBitCombinations[c[3]][1];
            break;
        default:
            printf("Incorrect syntax!\n");
            break;
    }
}
void transpositionProperAlgoFile(int * a, int k ){
    //for the key k we generate the proper shuffle with c the array of indexes
    int c[4]={0};
    arrayOfIndexesAllPossibleCombinationsFile(c, k);
    int b [4] = {a[0], a[1], a[2], a[3]};
    for (int i = 0; i < 4; ++i) {
        a[i]=b[c[i]];
    }
}
void keyTransformationFile(int * k) {
    *k= *k+1;
}
void encryptionFuncOn4BitFile(int a[4], int * k) {
    for (int i = 0; i < ITERATIONS; ++i) {
        substitutionProperAlgoFile(&a[0], *k);
        substitutionProperAlgoFile(&a[2], *k);
        transpositionProperAlgoFile(&a[0], *k);
        keyTransformationFile(k);
    }
}

int main(void) {
    Node * head=malloc(sizeof(Node));
    Node * newHead=head;
    Node ** tail=&newHead;

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)
    {
        addNode(tail, c);
    }
    printList(head);




    char str[128]={0};

    while (1) {
        printf("Enter a string of max 127 chars: ");
        fflush(stdout);

        if (!fgets(str, sizeof(str), stdin)) {
            // Handle EOF (Ctrl+D / Ctrl+Z)
            printf("Input error or EOF.\n");
            return 1;
        }

        // Check if newline is present
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            // remove newline
            str[len - 1] = '\0';
            break; // success: input fits
        } else {
            // input too long — clear remaining chars from stdin
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Input too long, please enter at most 127 characters.\n");
        }
    }

    int k=0;
    printf("key: ");
    fflush(stdout);
    scanf("%d", &k);

    //for every character in the string
    for (int i = 0; i < 128; ++i) {
        if (str[i]==0)//if its the end get out
            break;

        //I divide every char into the 2, 4 bit nibbles that compone it, into the firstHalf,secondHalf arrays
        //if it is 0001 1000 it is divided in firstHalf= 1000, secondHalf= 0001
        int firstHalf[4]={0};
        int secondHalf[4]={0};
        char fh=str[i] & 0xf;
        char sh=str[i]>>4;

        //for every position of the comparator I select that bit to put into the corresponding array
        char comparator=1;
        for (int j = 0; j < 4; j++) {
            if (fh & comparator) {
                firstHalf[j] = 1;
            }else {
                firstHalf[j] = 0;
            }
            if (sh & comparator) {
                secondHalf[j] = 1;
            }else {
                secondHalf[j] = 0;
            }
            comparator = comparator << 1;
        }

        //I call the encryption on the 2 nibbles using the same value key
        int k1=k;
        int k2=k;
        encryptionFuncOn4BitFile(firstHalf, &k1);
        encryptionFuncOn4BitFile(secondHalf, &k2);
        k=k1;

        //I combine the 2 encrypted arrays together into the final string
        fh=0;
        sh=0;
        for (int j = 3; j >= 0; j--) {
            fh=fh<<1;
            fh = fh+firstHalf[j];
            sh=sh<<1;
            sh= sh+secondHalf[j];
            if (j==0)
                sh=sh<<4;
        }
        str[i]=sh | fh;
    }
    //I display the output
    printf("encrypted string: %s\nin hexa: ", str);
    for (int i = 0; i < 128; ++i) {
        if (str[i]==0)
            break;
        printf("%02x", (unsigned char) str[i]);
    }
    printf("\nfinal key: %d", k);



    freeList(head);
    fclose(fptr);

    return 0;
}