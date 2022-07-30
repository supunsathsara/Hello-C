/*Write a C program to reverse the digits of a number using do-while statement. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    } while (n != 0);
    printf("%d", reverse);
    return 0;
}