#include <stdio.h>
#include <stdlib.h>

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
            case 11://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://11
                    a[0]=1;
                    a[1]=1;
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
            case 10://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://10
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
        case 3:
            switch ((a[0]*10)+a[1]) {
            case 0://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://11
                    a[0]=1;
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
            case 11://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://11
                    a[0]=1;
                    a[1]=1;
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
            case 11://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 6:
            switch ((a[0]*10)+a[1]) {
            case 1://00
                    a[0]=0;
                    a[1]=0;
                break;
            case 0://01
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
        case 7:
            switch ((a[0]*10)+a[1]) {
            case 1://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 0://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 8:
            switch ((a[0]*10)+a[1]) {
            case 1://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 0://10
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
        case 9:
            switch ((a[0]*10)+a[1]) {
            case 1://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 0://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 10:
            switch ((a[0]*10)+a[1]) {
            case 1://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 0://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 11:
            switch ((a[0]*10)+a[1]) {
            case 1://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 0://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 12:
            switch ((a[0]*10)+a[1]) {
            case 10://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 0://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://10
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
        case 13:
            switch ((a[0]*10)+a[1]) {
            case 10://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 0://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 14:
            switch ((a[0]*10)+a[1]) {
            case 10://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 0://10
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
        case 15:
            switch ((a[0]*10)+a[1]) {
            case 10://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 11://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 0://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 16:
            switch ((a[0]*10)+a[1]) {
            case 10://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 0://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 17:
            switch ((a[0]*10)+a[1]) {
            case 10://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 11://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 0://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 18:
            switch ((a[0]*10)+a[1]) {
            case 11://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 0://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 19:
            switch ((a[0]*10)+a[1]) {
            case 11://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 00://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 10://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 20:
            switch ((a[0]*10)+a[1]) {
            case 11://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 1://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 0://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 10://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 21:
            switch ((a[0]*10)+a[1]) {
            case 11://00
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
            case 00://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 22:
            switch ((a[0]*10)+a[1]) {
            case 11://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 0://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 1://11
                    a[0]=1;
                    a[1]=1;
                    break;
            default:
                    printf("Incorrect syntax!\n");
                    break;
            }
            break;
        case 23:
            switch ((a[0]*10)+a[1]) {
            case 11://00
                    a[0]=0;
                    a[1]=0;
                    break;
            case 10://01
                    a[0]=0;
                    a[1]=1;
                    break;
            case 1://10
                    a[0]=1;
                    a[1]=0;
                    break;
            case 0://11
                    a[0]=1;
                    a[1]=1;
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
}
void transposition(int * a, int k ){
    int b [4] = {a[0], a[1], a[2], a[3]};

    switch (k%24) {
        case 0:
            a[0]=b[0];
            a[1]=b[1];
            a[2]=b[2];
            a[3]=b[3];
            break;
        case 1:
            a[0]=b[0];
            a[1]=b[1];
            a[3]=b[2];
            a[2]=b[3];
            break;
        case 2:
            a[0]=b[0];
            a[2]=b[1];
            a[1]=b[2];
            a[3]=b[3];
            break;
        case 3:
            a[0]=b[0];
            a[2]=b[1];
            a[3]=b[2];
            a[1]=b[3];
            break;
        case 4:
            a[0]=b[0];
            a[3]=b[1];
            a[1]=b[2];
            a[2]=b[3];
            break;
        case 5:
            a[0]=b[0];
            a[3]=b[1];
            a[2]=b[2];
            a[1]=b[3];
            break;
        case 6:
            a[1]=b[0];
            a[0]=b[1];
            a[2]=b[2];
            a[3]=b[3];
            break;
        case 7:
            a[1]=b[0];
            a[2]=b[1];
            a[3]=b[2];
            a[2]=b[3];
            break;
        case 8:
            a[1]=b[0];
            a[2]=b[1];
            a[0]=b[2];
            a[3]=b[3];
            break;
        case 9:
            a[1]=b[0];
            a[2]=b[1];
            a[3]=b[2];
            a[0]=b[3];
            break;
        case 10:
            a[1]=b[0];
            a[3]=b[1];
            a[0]=b[2];
            a[2]=b[3];
            break;
        case 11:
            a[1]=b[0];
            a[3]=b[1];
            a[2]=b[2];
            a[0]=b[3];
            break;
        case 12:
            a[2]=b[0];
            a[0]=b[1];
            a[1]=b[2];
            a[3]=b[3];
            break;
        case 13:
            a[2]=b[0];
            a[0]=b[1];
            a[3]=b[2];
            a[1]=b[3];
            break;
        case 14:
            a[2]=b[0];
            a[1]=b[1];
            a[0]=b[2];
            a[3]=b[3];
            break;
        case 15:
            a[2]=b[0];
            a[1]=b[1];
            a[3]=b[2];
            a[0]=b[3];
            break;
        case 16:
            a[2]=b[0];
            a[3]=b[1];
            a[0]=b[2];
            a[1]=b[3];
            break;
        case 17:
            a[2]=b[0];
            a[3]=b[1];
            a[1]=b[2];
            a[0]=b[3];
            break;
        case 18:
            a[3]=b[0];
            a[0]=b[1];
            a[1]=b[2];
            a[2]=b[3];
            break;
        case 19:
            a[3]=b[0];
            a[0]=b[1];
            a[2]=b[2];
            a[1]=b[3];
            break;
        case 20:
            a[3]=b[0];
            a[1]=b[1];
            a[0]=b[2];
            a[2]=b[3];
            break;
        case 21:
            a[3]=b[0];
            a[1]=b[1];
            a[2]=b[2];
            a[0]=b[3];
            break;
        case 22:
            a[3]=b[0];
            a[2]=b[1];
            a[0]=b[2];
            a[1]=b[3];
            break;
        case 23:
            a[3]=b[0];
            a[2]=b[1];
            a[1]=b[2];
            a[0]=b[3];
            break;
        default:
            printf("error!\n");
            break;
    }
}
void keyTransformation(int * k) {
    *k= *k-1;
}
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
        //printf("%p ", &a[i]);
    }
    printa(a);
    printf("key: ");
    scanf("%d", &k);
    for (int i = 0; i < 2; ++i) {
        printf("key: %d\n", k);
        keyTransformation(&k);
        transposition(&a[0], k);
        printa(a);
        substitution(&a[0], k);
        substitution(&a[2], k);
        printa(a);

    }
    printf("Decrypted message: \n");
    printa(a);
    printf("with final key: %d \n", k);

}