#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LikedListExperiment.h"

#define ITERATIONS 10

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
int encryptList(Node * head, int k) {
    Node* current = head;
    Node* next_node;
    while (head!=NULL)
    {
        next_node = current->next;
        {
            unsigned char content=current->content;
            //I divide every char into the 2, 4 bit nibbles that compone it, into the firstHalf,secondHalf arrays
            //if it is 0001 1000 it is divided in firstHalf= 1000, secondHalf= 0001
            int firstHalf[4]={0};
            int secondHalf[4]={0};
            char fh=content & 0xf;
            char sh=content>>4;

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
            content=sh | fh;
            current->content=content;
        }

        head=head->next;
        if (next_node->next == NULL)
        {
            return k;
        }
        current=next_node;
    }
}
void writeListToFile(Node * head) {
    printf("enter the path/name of where to save the encrypted file: ");
    char fileName[128];
    scanf("%s",fileName);

    FILE *fptr;
    fptr = fopen(fileName, "wb");

    Node* current = head;
    Node* next_node;
    while (head!=NULL)
    {
        next_node = current->next;

        {
            //fwrite(const void * source, size_t size, size_t amount, FILE * fptr);
            fwrite(&current->content, 1, 1, fptr);
        }

        head=head->next;
        if (next_node->next == NULL)
        {
            fclose(fptr);
            return;
        }
        current=next_node;
    }
    fclose(fptr);
}

int main(void) {
    printf("FileEncryption-----------------\n\n");
    Node * head=malloc(sizeof(Node));
    Node * newHead=head;
    Node ** tail=&newHead;

    printf("enter the path/name of the file to encrypt: ");
    char fileName[128];
    scanf("%s",fileName);

    FILE *fptr;
    fptr = fopen(fileName, "rb");
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)
    {
        addNode(tail, c);
    }

    int k=0;
    printf("key: ");
    fflush(stdout);
    scanf("%d", &k);

    //printList(head);

    k=encryptList(head,k);

    printf("final key: %d\n", k);

    writeListToFile(head);

    freeList(head);
    fclose(fptr);

    return 0;
}