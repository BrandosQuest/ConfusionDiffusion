#include <stdio.h>
#include <stdlib.h>
#define ITERATIONS 22

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
            //a[2]=b[1];
            a[0]=b[1];
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
        printf("%d ", a[3-i]);
    }
    printf("\n");
}
void decryptionFuncOn4Bit(int a[4], int * k) {
    for (int i = 0; i < ITERATIONS; ++i) {
        printf("key: %d\n", *k);
        keyTransformation(k);
        transposition(&a[0], *k);
        //printa(a);
        substitution(&a[0], *k);
        substitution(&a[2], *k);
        //printa(a);

    }
}

int main(void) {
    printf("Enter a string of max 256 chars in hexa bytes: ");
    char strInitial[256]={0};
    char str[128]={0};
    //fgets(str, 128, stdin);
    scanf("%[^\n]%*c", strInitial);
    int k=0;
    printf("key: ");
    scanf("%d", &k);

    for (int i = 0; i < 256; i=i+2){
        if (strInitial[i]==0)
        {
            break;
        }
        for (int j = 0; j < 2; ++j)
        {
            if (strInitial[i+j]==0)
            {
                break;
            }
            char valueOfChar=0;
            switch (strInitial[i+j])
            {
                case '0':
                valueOfChar=0;
                break;
                case '1':
                valueOfChar=1;
                break;
                case '2':
                valueOfChar=2;
                break;
                case '3':
                valueOfChar=3;
                break;
                case '4':
                valueOfChar=4;
                break;
                case '5':
                valueOfChar=5;
                break;
                case '6':
                valueOfChar=6;
                break;
                case '7':
                valueOfChar=7;
                break;
                case '8':
                valueOfChar=8;
                break;
                case '9':
                valueOfChar=9;
                break;
                case 'a':
                valueOfChar=10;
                break;
                case 'b':
                valueOfChar=11;
                break;
                case 'c':
                valueOfChar=12;
                break;
                case 'd':
                valueOfChar=13;
                break;
                case 'e':
                valueOfChar=14;
                break;
                case 'f':
                valueOfChar=15;
                break;
                default:
                printf("error in the translation of the string to hexa\n");
                break;
            }
            if (j==0)
            {
                str[i/2]=valueOfChar*16;
            }else
            {
                str[i/2]=str[i/2]+valueOfChar;
            }
        }
    }
    //printf("str: %s\n", str);

    //for (int i = 0; i < 128; ++i) {
    for (int i = 127; i >= 0; --i) {
        if (str[i]==0)
            //break;
            continue;

        int firstHalf[4]={0};
        int secondHalf[4]={0};
        //char fh=str[i]<<4;//errore da risolvere
        char fh=str[i] & 0xf;
        char sh=str[i]>>4;

        //printf("fh: %d\n", fh);
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
        decryptionFuncOn4Bit(firstHalf, &k1);
        decryptionFuncOn4Bit(secondHalf, &k2);
        k=k1;

        printf("dec\n");
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
        str[i]=sh | fh;

    }
    printf("decrypted string: %s\nin hexa: ", str);
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
    decryptionFuncOn4Bit(a, &k);

    /*
    for (int i = 0; i < 2; ++i) {
        printf("key: %d\n", k);
        keyTransformation(&k);
        transposition(&a[0], k);
        printa(a);
        substitution(&a[0], k);
        substitution(&a[2], k);
        printa(a);

    }#1#
    printf("Decrypted message: \n");
    printa(a);
    printf("with final key: %d \n", k);*/

}
/*#include <stdio.h>

int main() {

    // a = 5 (00000101 in 8-bit binary)
    // b = 9 (00001001 in 8-bit binary)
    unsigned int a = 2, b = 15;

    // The result is 00000001
    printf("a&b = %u\n", a & b);

    // The result is 00001101
    printf("a|b = %u\n", a | b);

    // The result is 00001100
    printf("a^b = %u\n", a ^ b);

    // The result is 11111111111111111111111111111010
    // (assuming 32-bit unsigned int)
    printf("~a = %u\n", a = ~a);

    // The result is 00010010
    printf("b<<1 = %u\n", b << 1);

    // The result is 00000100
    printf("b>>1 = %u\n", b >> 1);
    return 0;
}*/