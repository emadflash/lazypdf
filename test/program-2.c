/*
@title:
    WAP to check whether the entered number is prime or not.
@input:
    69
@output:
    not prime
*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0)
            count++;
    }
    if (count > 1)
        printf("not prime\n");
    else
        printf("prime\n");
    return 0;
}
