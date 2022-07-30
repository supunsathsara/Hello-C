/*Write a C program to calculate nth power of a given integer. The user input base and exponent. (Do NOT use inbuilt functions, instead use a loop) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exponent, result = 1;
    printf("Enter a number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result = result * base;
        exponent--;
    }
    printf("%d", result);
    return 0;
}