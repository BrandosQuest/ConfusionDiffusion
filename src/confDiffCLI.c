#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This includes contain the liked list implementation
#include "fileSrc/fileDeUtils.h"
#include "fileSrc/fileEnUtils.h"


void encrypt(char *inputFile, char *outputFile, int key) {
    //Linked list for file reading and writing
    Node * head=malloc(sizeof(Node));
    Node * newHead=head;
    Node ** tail=&newHead;
    (*tail)->positionIndex=0;

    FILE *fptr;
    if ((fptr = fopen(inputFile, "rb")) == NULL)//this always executes the fopen
    {
        printf("WRONG ARGUMENTS\nMost probably the input_file does not exist or is misspelled\n");
        return;
    }
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)//reading a byte at a time
    {
        addNode(tail, c);
    }

    encryptList(head, &key);

    writeListToFile(head, outputFile);

    freeList(head);
    fclose(fptr);
    printf("Saved encrypted file in: %s", outputFile);
}
void decrypt(char *inputFile, char *outputFile, int key) {
    //Linked list for file reading and writing
    Node * head=malloc(sizeof(Node));
    head->previous=NULL;
    Node * newHead=head;
    Node ** tail=&newHead;
    (*tail)->positionIndex=0;

    FILE *fptr;
    if ((fptr = fopen(inputFile, "rb")) == NULL)
    {
        printf("WRONG ARGUMENTS\nMost probably the input_file does not exist or is misspelled\n");
        return;
    }
    unsigned char c=0;
    while (fread(&c, 1, 1, fptr) == 1)
    {
        addNode(tail, c);
    }

    decryptList(*tail,&key, (*tail)->positionIndex);

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
               ".\\confDiffCLI.exe encrypt -k 78 -i plaintext.txt -o ciphertext\n");
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
    // Convert the string to a long integer
    int key = (int) strtol(strKey, &endptr, 10);
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
