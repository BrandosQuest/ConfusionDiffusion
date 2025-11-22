#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fileSrc/fileDeUtils.h"
#include "fileSrc/fileEnUtils.h"

void encrypt(char *inputFile, char *outputFile, int keyTransposition, int keySubstitution, int keyIterations) {
    //encrypt code
    printf("keyTransposition %d\n", keyTransposition);
    printf("keySubstitution %d\n", keySubstitution);
    printf("keyIterations %d\n", keyIterations);
    //all the keys must be used in their respective aspects and the final result printed for debugging

    Node * head=malloc(sizeof(Node));
    Node * newHead=head;
    Node ** tail=&newHead;
    (*tail)->positionIndex=0;

    FILE *fptr;
    fptr = fopen(inputFile, "rb");
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)
    {
        addNode(tail, c);
    }

    encryptList(head, &keyTransposition);

    printf("final key: %d\n", keyTransposition);

    writeListToFile(head, outputFile);

    freeList(head);
    fclose(fptr);
}
void decrypt(char *inputFile, char *outputFile, int keyTransposition, int keySubstitution, int keyIterations) {
    //decrypt code
    printf("keyTransposition %d\n", keyTransposition);
    printf("keySubstitution %d\n", keySubstitution);
    printf("keyIterations %d\n", keyIterations);
    //all the keys must be used in their respective aspects, and must be derived by the list size. and the final result printed for debugging

    Node * head=malloc(sizeof(Node));
    head->previous=NULL;
    Node * newHead=head;
    Node ** tail=&newHead;
    (*tail)->positionIndex=0;

    FILE *fptr;
    fptr = fopen(inputFile, "rb");
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)
    {
        addNode(tail, c);
        //printf("position index: %d\n", (*tail)->positionIndex);
    }
    printf("final position index: %d\n", (*tail)->positionIndex);


    decryptList(*tail,&keyTransposition, (*tail)->positionIndex);

    printf("final keyy: %d\n", keyTransposition);

    DEwriteListToFile(head, outputFile);

    freeList(head);
    fclose(fptr);
}

int main(int argc, char *argv[]) {
    if (!(argc == 8 && (strcmp(argv[1], "encrypt") == 0 || strcmp(argv[1], "decrypt") == 0)
        && strcmp(argv[2], "-k") == 0 && strcmp(argv[4], "-i") == 0 && strcmp(argv[6], "-o") == 0))
    {
        printf("WRONG ARGUMENTS\n");
        printf("-should have been: "
               "cipher decrypt -k <key6digits> -i <input_file> -o <output_file>\n"
               "-example: "
               ".\\confDiffCLI.exe encrypt -k 786956 -i plaintext.txt -o ciphertext");
        return 0;
    }
    int i;
    for (i=0; argv[3][i]!=0 && i<100; ++i);
    if (i!=6)
    {
        printf("WRONG Key LENGHT, MUST BE 6 DIGITS (instead of %d)\n", i);
        return 0;
    }

    const char *strKey = argv[3];
    char *endptr;
    int key;
    // Convert the string to a long integer
    key = (int) strtol(strKey, &endptr, 10);
    //display the long hexadecimal integer number
    //printf("The inputted key is: %d\n", key);

    char *inputFile = argv[5];
    char *outputFile = argv[7];

    int keyTransposition= key%100;
    key=key/100;
    int keySubstitution= key%100;
    key=key/100;
    int keyIterations= key%100;

    if (strcmp(argv[1], "encrypt") == 0)
    {
        encrypt(inputFile, outputFile, keyTransposition, keySubstitution, keyIterations);
    }
    else
    {
        decrypt(inputFile, outputFile, keyTransposition, keySubstitution, keyIterations);
        /*//decrypt code
        Node * head=malloc(sizeof(Node));
        head->previous=NULL;
        Node * newHead=head;
        Node ** tail=&newHead;

        FILE *fptr;
        fptr = fopen(outputFile, "rb");
        unsigned char c=0;
        while (fread(&c, 1, 1, fptr) == 1)
        {
            addNode(tail, c);
        }


        decryptList(*tail,&key);

        printf("final key: %d\n", key);

        DEwriteListToFile(head);

        freeList(head);
        fclose(fptr);*/
    }
}
