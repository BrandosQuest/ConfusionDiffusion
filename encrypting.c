#include <stdio.h>
#include <string.h>

#define ITERATIONS 222

void printa(int * a) {
    printf("array: ");
    fflush(stdout);
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[3-i]);
        fflush(stdout);
    }
    printf("\n");
    fflush(stdout);
}
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
void arrayOfIndexesAllPossibleCombinations(int a[4], int k) {
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
                    if (count==0) {//printa l e il prossimo numero che è diverso da i e j
                        //printf("%d", i);
                        a[0]=i;
                        //printf("%d", j);
                        a[1]=j;
                        //printf("%d",l);
                        a[2]=l;
                        for (int m = 0; m < 4; ++m) {
                            if (m==l || m==j || m==i)
                                continue;
                            //printf("%d",m);
                            a[3]=m;
                        }
                    }else {//printa il precedente numero che è diverso da i e j e poi l
                        //printf("%d", i);
                        a[0]=i;
                        //printf("%d", j);
                        a[1]=j;
                        //printf("%d",l);
                        a[2]=l;
                        for (int m = 3; m >= 0; --m) {
                            if (m==l || m==j || m==i)
                                continue;
                            //printf("%d",m);
                            a[3]=m;
                        }
                    }
                }
                //printf("\t");
                count++;
                counter++;
            }
        }
        //printf("\n");
    }
}
void substitutionProperAlgo(int * a, int k ) {
    int c[4]={0};
    unsigned char TwoBitCombinations[4][2]={{0,0}, {0,1}, {1,0},{1,1}};
    arrayOfIndexesAllPossibleCombinations(c, k);
    switch ((a[0]*10)+a[1]) {
        case 0://00
            a[0]=TwoBitCombinations[c[0]][0];
            a[1]=TwoBitCombinations[c[0]][1];
            break;
        case 1://01
            a[0]=TwoBitCombinations[c[1]][0];
            a[1]=TwoBitCombinations[c[1]][1];
            break;
        case 10://10
            a[0]=TwoBitCombinations[c[2]][0];
            a[1]=TwoBitCombinations[c[2]][1];
            break;
        case 11://11
            a[0]=TwoBitCombinations[c[3]][0];
            a[1]=TwoBitCombinations[c[3]][1];
            break;
        default:
            printf("Incorrect syntax!\n");
            break;
    }
    /*
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
*/
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
void transpositionProperAlgo(int * a, int k ){
    /*
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j==i)
                continue;
            int count=0;
            for (int l = 0; l < 4; ++l) {
                if (l==j || l==i)
                    continue;
                if (count==0) {//printa l e il prossimo numero che è diverso da i e j
                    printf("%d", i);
                    printf("%d", j);
                    printf("%d",l);
                    for (int m = 0; m < 4; ++m) {
                        if (m==l || m==j || m==i)
                            continue;
                        printf("%d",m);
                    }
                }else {//printa il precedente numero che è diverso da i e j e poi l
                    printf("%d", i);
                    printf("%d", j);
                    printf("%d",l);
                    for (int m = 3; m >= 0; --m) {
                        if (m==l || m==j || m==i)
                            continue;
                        printf("%d",m);
                    }
                }
                printf("\t");
                count++;
            }
        }
        printf("\n");
    }
    */
    int c[4]={0};
    /*for (int i = 0; i < 24; ++i) {
        arrayOfIndexAllCombinations(c, i);
        printa(c);
    }*/
    arrayOfIndexesAllPossibleCombinations(c, k);
    int b [4] = {a[0], a[1], a[2], a[3]};
    for (int i = 0; i < 4; ++i) {
        a[i]=b[c[i]];
    }


    /*
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
    }*/
}
void keyTransformation(int * k) {
    *k= *k+1;
}
void encryptionFuncOn4Bit(int a[4], int * k) {
    for (int i = 0; i < ITERATIONS; ++i) {
        // substitution(&a[0], *k);
        // substitution(&a[2], *k);
        substitutionProperAlgo(&a[0], *k);
        substitutionProperAlgo(&a[2], *k);
        //transposition(&a[0], *k);
        transpositionProperAlgo(&a[0], *k);
        //printa(&a[0]);
        keyTransformation(k);
    }
}

int main(void) {
    char str[128]={0};

    while (1) {
        printf("Enter a string of max 127 chars: ");
        fflush(stdout);

        if (!fgets(str, sizeof(str), stdin)) {
            // Handle EOF (Ctrl+D / Ctrl+Z)
            printf("Input error or EOF.\n");
            return 1;
        }

        // Check if newline is present
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            // remove newline
            str[len - 1] = '\0';
            break; // success: input fits
        } else {
            // input too long — clear remaining chars from stdin
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Input too long, please enter at most 127 characters.\n");
        }
    }

    int k=0;
    printf("key: ");
    fflush(stdout);
    scanf("%d", &k);

    //for every character in the string
    for (int i = 0; i < 128; ++i) {
        if (str[i]==0)//if its the end get out
            break;

        //I divide every char into the 2 4 bit nibbles that compone it, into the firstHalf,secondHalf arrays
        //if it is 0001 1000 it is divided in firstHalf= 1000, secondHalf= 0001
        int firstHalf[4]={0};
        int secondHalf[4]={0};
        char fh=str[i] & 0xf;
        char sh=str[i]>>4;

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
        int k1=k;
        int k2=k;
        encryptionFuncOn4Bit(firstHalf, &k1);
        encryptionFuncOn4Bit(secondHalf, &k2);
        k=k1;

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
        str[i]=sh | fh;
    }
    //I display the output
    printf("encrypted string: %s\nin hexa: ", str);
    for (int i = 0; i < 128; ++i) {
        if (str[i]==0)
            break;
        printf("%02x", (unsigned char) str[i]);
    }
    printf("\nfinal key: %d", k);
    return 0;
}