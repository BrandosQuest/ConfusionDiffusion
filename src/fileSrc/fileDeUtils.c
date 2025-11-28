//
// Created by Brando on 13/11/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../LinkedList/LinkedListExperiment.h"

#define ITERATIONS 10

void DEprinta(int * a) {
    printf("array: ");
    fflush(stdout);
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[3-i]);
        fflush(stdout);
    }
    printf("\n");
    fflush(stdout);
}
void DEarrayOfIndexesAllPossibleCombinations(int a[4], int k) {
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
void DEsubstitutionProperAlgo(int * a, int k ) {
    //for the key k we generate the indexes of the 2 bit combination corresponding
    int c[4]={0};
    unsigned char TwoBitCombinations[4][2]={{0,0}, {0,1}, {1,0},{1,1}};
    DEarrayOfIndexesAllPossibleCombinations(c, k);
    int i=0;
    switch ((a[0]*10)+a[1]) {
        case 0://00
        for (i = 0; i < 4; ++i)
        {
            if (c[i]==0)
                break;
        }
        a[0]=TwoBitCombinations[i][0];
        a[1]=TwoBitCombinations[i][1];
            break;
        case 1://01
        for (i = 0; i < 4; ++i)
        {
            if (c[i]==1)
                break;
        }
        a[0]=TwoBitCombinations[i][0];
        a[1]=TwoBitCombinations[i][1];
            break;
        case 10://10
        for (i = 0; i < 4; ++i)
        {
            if (c[i]==2)
                break;
        }
        a[0]=TwoBitCombinations[i][0];
        a[1]=TwoBitCombinations[i][1];
            break;
        case 11://11

            for (i = 0; i < 4; ++i)
            {
                if (c[i]==3)
                    break;
            }
            a[0]=TwoBitCombinations[i][0];
            a[1]=TwoBitCombinations[i][1];
            break;
        default:
            printf("Incorrect syntax!\n");
            break;
    }
}
void DEtranspositionProperAlgo(int * a, int k ){
    //for the key k we generate the proper shuffle with c the array of indexes
    int c[4]={0};
    DEarrayOfIndexesAllPossibleCombinations(c, k);
    int b [4] = {a[0], a[1], a[2], a[3]};
    for (int i = 0; i < 4; ++i) {
        a[c[i]]=b[i];
    }
}
void DEkeyTransformation(int * k) {
    *k= *k-1;
    if (*k<0)
    {
        *k=23;
    }
    //printf("DEkeyTransformation: %d\n", *k);
}
void decryptionFuncOn4Bit(int a[4], int * k) {
    for (int i = 0; i < ITERATIONS; ++i) {
        DEkeyTransformation(k);//transform the key for this iteration
        DEtranspositionProperAlgo(&a[0], *k);//shuffle the 4 bits
        DEsubstitutionProperAlgo(&a[0], *k);//first half of the nibble, first 2 bits
        DEsubstitutionProperAlgo(&a[2], *k);//second half of the nibble, second 2 bits
    }
}
void decryptList(Node * tail, int *k, unsigned int positionIndex) {
    Node* current = tail->previous;
    Node* next_node;

    *k=*k+(positionIndex*ITERATIONS);

    while (current!=NULL)
    {
        next_node = current->previous;
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
            int k1=(*k);
            int k2=(*k);
            decryptionFuncOn4Bit(firstHalf, &k1);
            decryptionFuncOn4Bit(secondHalf, &k2);
            (*k)=k1;

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
        if (current->previous == NULL)
        {
            return;
        }
        current=next_node;
    }
}
void DEwriteListToFile(Node * head, char *outputFile) {
    FILE *fptr;
    fptr = fopen(outputFile, "wb");

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