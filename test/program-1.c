/*
@title:
    WAP to print the Fibonacci series up to n term.
@input:
    9
@output:
    1 1 2 3 5 8 13 21 34 55
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 1, b = 1;
    int c = a + b;

    printf("%d ", b);
    for (int i = 0; i < n; ++i) {
        printf("%d ", b);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
    return 0;
}
