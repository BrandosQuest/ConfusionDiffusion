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
