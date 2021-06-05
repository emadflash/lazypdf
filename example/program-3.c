/*
@title:
    Take input of 3 digit number and check whether it is an Armstrong number
    and Palindrome number or not.
@input:
    13
@output:
    Not a armstrong number
    Not a palindrome number
*/

#include <math.h>
#include <stdio.h>

int main() {
    int digit;
    int rev_num = 0;
    int palindrome_sum = 0;
    int num;
    scanf("%d", &num);

    int n = num;
    while (n > 0) {
        digit = n % 10;
        rev_num = rev_num * 10 + digit;
        palindrome_sum += pow(digit, 3);
        n /= 10;
    }

    if (palindrome_sum != num)
        printf("Not a armstrong num\n");
    else
        printf("A armstrong num\n");

    if (rev_num != num)
        printf("Not a palindrome num\n");
    else
        printf("A palindrome num\n");
    return 0;
}
