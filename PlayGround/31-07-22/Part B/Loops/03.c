/*Write a C program to calculate factorial of a user given number. */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}