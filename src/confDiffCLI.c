#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fileSrc/fileDeUtils.h"
#include "fileSrc/fileEnUtils.h"


void encrypt(char *inputFile, char *outputFile, int key) {
    //encrypt code
    //printf("key %d\n", key);

    Node * head=malloc(sizeof(Node));
    Node * newHead=head;
    Node ** tail=&newHead;
    (*tail)->positionIndex=0;

    FILE *fptr;
    if ((fptr = fopen(inputFile, "rb")) == NULL)
    {
        printf("WRONG ARGUMENTS\nMost probably the input_file does not exist or is misspelled");
        return;
    }
    //fptr = fopen(inputFile, "rb");
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)
    {
        addNode(tail, c);
    }

    encryptList(head, &key);

    //printf("final key: %d\n", key);

    writeListToFile(head, outputFile);

    freeList(head);
    fclose(fptr);
    printf("Saved encrypted file in: %s", outputFile);
}
void decrypt(char *inputFile, char *outputFile, int key) {
    //decrypt code
    //printf("key %d\n", key);

    Node * head=malloc(sizeof(Node));
    head->previous=NULL;
    Node * newHead=head;
    Node ** tail=&newHead;
    (*tail)->positionIndex=0;

    FILE *fptr;
    if ((fptr = fopen(inputFile, "rb")) == NULL)
    {
        printf("WRONG ARGUMENTS\nMost probably the input_file does not exist or is misspelled");
        return;
    }
    //fptr = fopen(inputFile, "rb");
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)
    {
        addNode(tail, c);
    }
    //printf("final position index: %d\n", (*tail)->positionIndex);


    decryptList(*tail,&key, (*tail)->positionIndex);

    //printf("final keyy: %d\n", key);

    DEwriteListToFile(head, outputFile);

    freeList(head);
    fclose(fptr);
    printf("Saved encrypted file in: %s", outputFile);

}

int main(int argc, char *argv[]) {
    if (!(argc == 8 && (strcmp(argv[1], "encrypt") == 0 || strcmp(argv[1], "decrypt") == 0)
        && strcmp(argv[2], "-k") == 0 && strcmp(argv[4], "-i") == 0 && strcmp(argv[6], "-o") == 0))
    {
        printf("WRONG ARGUMENTS\n");
        printf("-should have been: "
               "cipher.exe decrypt -k <key2digits> -i <input_file> -o <output_file>\n"
               "-example: "
               ".\\confDiffCLI.exe encrypt -k 78 -i plaintext.txt -o ciphertext");
        return 0;
    }
    int i;
    for (i=0; argv[3][i]!=0 && i<100; ++i);
    if (i!=2)
    {
        printf("WRONG Key LENGHT, MUST BE 2 DIGITS (instead of %d)\n", i);
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

    if (strcmp(argv[1], "encrypt") == 0)
    {
        encrypt(inputFile, outputFile, key);
    }
    else
    {
        decrypt(inputFile, outputFile, key);
    }
}
