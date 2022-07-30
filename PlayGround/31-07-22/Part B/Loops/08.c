/*Write a C program to check whether a given number is an Armstrong Number! (Refer to previous flowcharts) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        sum = sum + (temp % 10) * (temp % 10) * (temp % 10);
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("%d is an Armstrong number", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }
    return 0;
}