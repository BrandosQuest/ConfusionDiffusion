#include <stdio.h>
#include <stdlib.h>

/*
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
}*/

void substitution(int * a, int k ) {
    switch (k%24) {
        case 0:
            switch ((a[0]*10)+a[1]) {
                case 0://00
                    a[0]=0;
                    a[1]=0;
                    break;
                case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
                case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
                case 11://11
                    a[0]=1;
                    a[1]=1;
                    break;
                default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 1:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 2:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 3:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 4:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 5:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 6:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                a[0]=0;
                a[1]=1;
                break;
            case 1://01
                a[0]=0;
                a[1]=0;
                break;
            case 10://10
                a[0]=1;
                a[1]=0;
                break;
            case 11://11
                a[0]=1;
                a[1]=1;
                break;
            default:
                printf("Incorrect syntax!\n");
                break;
        }
            break;
        case 7:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 8:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 9:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 10:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 11:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 12:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 13:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 14:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 15:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 16:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 17:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 18:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 19:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 20:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=1;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 21:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 22:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 23:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=1;
                    a[1]=1;
                    break;
            case 1://01
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://10
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://11
                    a[0]=0;
                    a[1]=0;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        default:
            printf("error!\n");
            break;
    }
};
void transposition(int * a, int k ){};
void keyTransformation(int * k){};
void printa(int * a) {
    printf("array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(void) {
    int a [4] = {0};
    int k=0;

    for (int i = 0; i < 4; ++i) {
        printf("value %d: ", i);
        scanf("%d", &a[i]);
        //printf("%p ", &a[i]); ciao sono bandada substitution  substituition substitution
    }
    printa(a);
    printf("key: ");
    scanf("%d", &k);
    for (int i = 0; i < 4; ++i) {
        substitution(&a[0], k);
        substitution(&a[2], k);
        transposition(&a[0], k);
        keyTransformation(&k);
    }
    printa(a);

}