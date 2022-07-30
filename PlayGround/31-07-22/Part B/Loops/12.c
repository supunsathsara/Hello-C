/*Write a C program to print all factors of a given integer. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int num, i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}