#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (!(argc == 8 && (strcmp(argv[1], "encrypt") == 0 || strcmp(argv[1], "decrypt") == 0)
        && strcmp(argv[2], "-k") == 0 && strcmp(argv[4], "-i") == 0 && strcmp(argv[6], "-o") == 0))
    {
        printf("WRONG ARGUMENTS\n");
        printf("-should have been: "
               "cipher decrypt -k <key6digits> -i <input_file> -o <output_file>\n"
               "-example: "
               ".\\confDiffCLI.exe encrypt -k 777777 -i plaintext.txt -o ciphertext");
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

    if (strcmp(argv[1], "encrypt") == 0)
    {
        //encrypt code




        /*key=7560;  how tf do i get 3 24 values keys from a number?
        printf("first %d\n", key%24);
        key/=24;
        printf("second %d\n", key%24);
        key/=24;
        printf("third %d\n", key%24);
        key/=24;
        printf("lats %d\n", key);*/
    }
    else
    {
        //decrypt code
    }
}
