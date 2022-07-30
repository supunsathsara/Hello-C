/*Write a program to check whether a given number is prime or not. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number", num);
    }
}