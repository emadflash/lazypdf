/*
@title:
    Write a program to find the sum of following series
    1-X1/1! + X2/2! - ............+ Xn /n!
@input: 
    1
    3
@output:
    0.5
*/

#include <stdio.h>

int main() {
    int num;
    int end;
    scanf("%d%d", &num, &end);
    int fact = 1;

    float base_w_power = num;
    float sum = 1;
    for (int i = 1; i < end; ++i) {
        fact *= i;
        base_w_power *= num;
        if (i % 2 == 0) {
            sum += base_w_power / fact;
        } else {
            sum -= base_w_power / fact;
        }
    }
    printf("%f\n", sum);
    return 0;
}
