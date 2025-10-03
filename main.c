#include <stdio.h>
#include <stdlib.h>

void ivert2Pos(char x, char y, FILE* ptr) {
    fputc(x, ptr);
    fputc(y, ptr);
}

int main(void) {
    // File Pointer declared
    FILE* ptr;

    // File opened
    ptr = fopen("TranspositionTable.txt", "a");

    // Failed Condition
    if (ptr == NULL) {
        printf("Error Occurred While creating a "
               "file !");
        exit(1);
    }
    // Data to be inserted
    char str[] = "This is all the Data to be inserted in "
                 "File by GFG.";

    // Puts data inside the file
    fputs(str, ptr);


    // File closed
    fclose(ptr);
    printf("Hello?\n");



    return 0;
}