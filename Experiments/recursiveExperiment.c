/*
#include <stdio.h>

int recursiveProduct(int a, int b) {
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + recursiveProduct(a, b - 1);
    }
}
int main() {
    int a=2;
    int b=3;
    printf("%d\n", recursiveProduct(a, b));
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("ciaoo\n");
    int * p;
    //printf("%d\n",*p);// you cant get the value of an initialized / NULL / 0 pointer
    printf("%p\n",p);
    p= malloc(sizeof(int));
    *p=10;
    printf("%d\n",*p);
    printf("%p\n",p);
    free(p);
    printf("%d\n",*p);
    printf("%p\n",p);
    p = NULL;
    //printf("%d\n",*p);// you cant get the value of a NULL / 0 pointer
    printf("%p",p);
    return 0;
}
