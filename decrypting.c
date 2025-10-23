#include <stdio.h>
#include <string.h>

#define ITERATIONS 10

void DEprinta(int * a) {
    printf("array: ");
    fflush(stdout);
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[3-i]);
        fflush(stdout);
    }
    printf("\n");
    fflush(stdout);
}
void DEarrayOfIndexesAllPossibleCombinations(int a[4], int k) {
    //an iterative way to get the n shuffle of 4 elements
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
                    if (count==0) {
                        a[0]=i;
                        a[1]=j;
                        a[2]=l;
                        for (int m = 0; m < 4; ++m) {
                            if (m==l || m==j || m==i)
                                continue;
                            a[3]=m;
                        }
                    }else {
                        a[0]=i;
                        a[1]=j;
                        a[2]=l;
                        for (int m = 3; m >= 0; --m) {
                            if (m==l || m==j || m==i)
                                continue;
                            a[3]=m;
                        }
                    }
                }
                count++;
                counter++;
            }
        }
    }
}
void DEsubstitutionProperAlgo(int * a, int k ) {
    //for the key k we generate the indexes of the 2 bit combination corresponding
    int c[4]={0};
    unsigned char TwoBitCombinations[4][2]={{0,0}, {0,1}, {1,0},{1,1}};
    DEarrayOfIndexesAllPossibleCombinations(c, k);
    int i=0;
    switch ((a[0]*10)+a[1]) {
        case 0://00
        for (i = 0; i < 4; ++i)
        {
            if (c[i]==0)
                break;
        }
        a[0]=TwoBitCombinations[i][0];
        a[1]=TwoBitCombinations[i][1];
            break;
        case 1://01
        for (i = 0; i < 4; ++i)
        {
            if (c[i]==1)
                break;
        }
        a[0]=TwoBitCombinations[i][0];
        a[1]=TwoBitCombinations[i][1];
            break;
        case 10://10
        for (i = 0; i < 4; ++i)
        {
            if (c[i]==2)
                break;
        }
        a[0]=TwoBitCombinations[i][0];
        a[1]=TwoBitCombinations[i][1];
            break;
        case 11://11

            for (i = 0; i < 4; ++i)
            {
                if (c[i]==3)
                    break;
            }
            a[0]=TwoBitCombinations[i][0];
            a[1]=TwoBitCombinations[i][1];
            break;
        default:
            printf("Incorrect syntax!\n");
            break;
    }
}
void DEtranspositionProperAlgo(int * a, int k ){
    //for the key k we generate the proper shuffle with c the array of indexes
    int c[4]={0};
    DEarrayOfIndexesAllPossibleCombinations(c, k);
    int b [4] = {a[0], a[1], a[2], a[3]};
    for (int i = 0; i < 4; ++i) {
        a[c[i]]=b[i];
    }
}
void DEkeyTransformation(int * k) {
    *k= *k-1;
}
void decryptionFuncOn4Bit(int a[4], int * k) {
    for (int i = 0; i < ITERATIONS; ++i) {
        DEkeyTransformation(k);//transform the key for this iteration
        DEtranspositionProperAlgo(&a[0], *k);//shuffle the 4 bits
        DEsubstitutionProperAlgo(&a[0], *k);//first half of the nibble, first 2 bits
        DEsubstitutionProperAlgo(&a[2], *k);//second half of the nibble, second 2 bits
    }
}
void hexaStringTo8BitChars(char strInitial[256], char str[128]) {
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

}

int main(void) {
    char strInitial[256]={0};
    while (1) {
        printf("Enter a string of max 255 chars (it should be a even number): ");

        if (!fgets(strInitial, sizeof(strInitial), stdin)) {
            // Handle EOF (Ctrl+D / Ctrl+Z)
            printf("Input error or EOF.\n");
            return 1;
        }

        // Check if newline is present
        size_t len = strlen(strInitial);
        if (len > 0 && strInitial[len - 1] == '\n') {
            // remove newline
            strInitial[len - 1] = '\0';
            break; // success: input fits
        } else {
            // input too long — clear remaining chars from stdin
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Input too long, please enter at most 255 characters.\n");
        }
    }

    int k=0;
    printf("key: ");
    scanf("%d", &k);

    char str[128]={0};
    //I convert the Hexa value displayed by chars in the input string in real 8 bit chars in a string of 128
    hexaStringTo8BitChars(strInitial, str);

    //for every character in the string
    for (int i = 127; i >= 0; --i) {
        if (str[i]==0)//if its the end get out
            continue;

        //I divide every char into the 2, 4 bit nibbles that compone it, into the firstHalf,secondHalf arrays
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

        //I call the decryption on the 2 nibbles using the same value key
        int k1=k;
        int k2=k;
        decryptionFuncOn4Bit(firstHalf, &k1);
        decryptionFuncOn4Bit(secondHalf, &k2);
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
    printf("decrypted string: %s\nin hexa: ", str);
    for (int i = 0; i < 128; ++i) {
        if (str[i]==0)
            break;
        printf("%02x", (unsigned char) str[i]);
    }
    printf("\nfinal key: %d", k);
    return 0;
}

