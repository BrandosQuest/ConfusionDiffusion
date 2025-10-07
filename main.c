#include <stdio.h>
#include <stdlib.h>

#define ITERATIONS 22
/*with iterations=2;
mmmmmmmmmmmmmmmmmmmmmm  22chars
ebb5c2d87ac72e3e8d7b7bd7ebb5c2d87ac72e3e8d7b  ek0 dk44   44chars
b73cebb7dad2b8f876d4e94b73cebb7dad2b8f876d    ek1 dk45   42chars this doesn't work*/

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
            a[2]=b[3];
            a[3]=b[2];
            break;
        case 2:
            a[0]=b[0];
            a[1]=b[2];
            a[2]=b[1];
            a[3]=b[3];
            break;
        case 3:
            a[0]=b[0];
            a[1]=b[2];
            a[2]=b[3];
            a[3]=b[1];
            break;
        case 4:
            a[0]=b[0];
            a[1]=b[3];
            a[2]=b[1];
            a[3]=b[2];
            break;
        case 5:
            a[0]=b[0];
            a[1]=b[3];
            a[2]=b[2];
            a[3]=b[1];
            break;
        case 6:
            a[0]=b[1];
            a[1]=b[0];
            a[2]=b[2];
            a[3]=b[3];
            break;
        case 7:
            a[0]=b[1];
            //a[1]=b[2];
            a[1]=b[0];
            a[2]=b[3];
            a[3]=b[2];
            break;
        case 8:
            a[0]=b[1];
            a[1]=b[2];
            a[2]=b[0];
            a[3]=b[3];
            break;
        case 9:
            a[0]=b[1];
            a[1]=b[2];
            a[2]=b[3];
            a[3]=b[0];
            break;
        case 10:
            a[0]=b[1];
            a[1]=b[3];
            a[2]=b[0];
            a[3]=b[2];
            break;
        case 11:
            a[0]=b[1];
            a[1]=b[3];
            a[2]=b[2];
            a[3]=b[0];
            break;
        case 12:
            a[0]=b[2];
            a[1]=b[0];
            a[2]=b[1];
            a[3]=b[3];
            break;
        case 13:
            a[0]=b[2];
            a[1]=b[0];
            a[2]=b[3];
            a[3]=b[1];
            break;
        case 14:
            a[0]=b[2];
            a[1]=b[1];
            a[2]=b[0];
            a[3]=b[3];
            break;
        case 15:
            a[0]=b[2];
            a[1]=b[1];
            a[2]=b[3];
            a[3]=b[0];
            break;
        case 16:
            a[0]=b[2];
            a[1]=b[3];
            a[2]=b[0];
            a[3]=b[1];
            break;
        case 17:
            a[0]=b[2];
            a[1]=b[3];
            a[2]=b[1];
            a[3]=b[0];
            break;
        case 18:
            a[0]=b[3];
            a[1]=b[0];
            a[2]=b[1];
            a[3]=b[2];
            break;
        case 19:
            a[0]=b[3];
            a[1]=b[0];
            a[2]=b[2];
            a[3]=b[1];
            break;
        case 20:
            a[0]=b[3];
            a[1]=b[1];
            a[2]=b[0];
            a[3]=b[2];
            break;
        case 21:
            a[0]=b[3];
            a[1]=b[1];
            a[2]=b[2];
            a[3]=b[0];
            break;
        case 22:
            a[0]=b[3];
            a[1]=b[2];
            a[2]=b[0];
            a[3]=b[1];
            break;
        case 23:
            a[0]=b[3];
            a[1]=b[2];
            a[2]=b[1];
            a[3]=b[0];
            break;
        default:
            printf("error!\n");
            break;
    }
}
void keyTransformation(int * k) {
    *k= *k+1;
}
void printa(int * a) {
    printf("array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[3-i]);
    }
    printf("\n");
}
void encryptionFuncOn4Bit(int a[4], int * k) {
    //printf("new 4 bit encryption\n");
    for (int i = 0; i < ITERATIONS; ++i) {
        //printf("key: %d\n", *k);
        //printa(a);
        substitution(&a[0], *k);
        substitution(&a[2], *k);
        //printa(a);
        transposition(&a[0], *k);
        keyTransformation(k);
        //printa(a);
    }
}
int main(void) {
    printf("Enter a string of max 128 chars: ");
    char str[128]={0};
    //fgets(str, 128, stdin);
    scanf("%[^\n]%*c", str);
    int k=0;
    printf("key: ");
    scanf("%d", &k);
    for (int i = 0; i < 128; ++i) {
        if (str[i]==0)
            break;

        int firstHalf[4]={0};
        int secondHalf[4]={0};
        //char fh=str[i]<<4;//errore da risolvere
        char fh=str[i] & 0xf;
        char sh=str[i]>>4;

        printf("fh: %d\n", fh);
        char comparator=1;
        for (int j = 0; j < 4; j++) {
        //for (int j = 3; j >= 0; j--) {
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
            /*firstHalf[j] = fh % 10 ;
            fh = fh/10;
            secondHalf[j] = sh % 10 ;
            sh = sh/10;*/
        }
        printa(firstHalf);
        printa(secondHalf);

        int k1=k;
        int k2=k;
        encryptionFuncOn4Bit(firstHalf, &k1);
        encryptionFuncOn4Bit(secondHalf, &k2);
        k=k1;

        printf("en\n");
        printa(firstHalf);
        printa(secondHalf);

        fh=0;
        sh=0;
        for (int j = 3; j >= 0; j--) {
            fh=fh<<1;
            fh = fh+firstHalf[j];
            //fh=fh<<1;
            sh=sh<<1;
            sh= sh+secondHalf[j];
            //sh=sh<<1;
            if (j==0)
                sh=sh<<4;
        }
        printf("fh: %02x\n",(unsigned char) fh);
        printf("sh: %02x\n",(unsigned char) sh);
        str[i]=sh | fh;

    }
    printf("encrypted string: %s\nin hexa: ", str);
    for (int i = 0; i < 128; ++i) {
        if (str[i]==0)
            break;
        printf("%02x", (unsigned char) str[i]);
    }
    printf("\nfinal key: %d", k);
    /*int a [4] = {0};
    int k=0;

    for (int i = 0; i < 4; ++i) {
        printf("value %d: ", i);
        scanf("%d", &a[i]);
        //printf("%p ", &a[i]);
    }
    printa(a);
    printf("key: ");
    scanf("%d", &k);
    encryptionFuncOn4Bit(a, &k);
    /*for (int i = 0; i < ITERATIONS; ++i) {
        printf("key: %d\n", k);
        substitution(&a[0], k);
        substitution(&a[2], k);
        printa(a);
        transposition(&a[0], k);
        printa(a);
        keyTransformation(&k);
    }#1#
    printf("Encrypted message: \n");
    printa(a);
    printf("with final key: %d \n", k);*/

}