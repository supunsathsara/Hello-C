/*Use If-Else and write a program that reads an integer and determines and prints if the number is even or odd. (I.e. divisible by 2) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is an even number", n);
    }
    else
    {
        printf("%d is an odd number", n);
    }
}