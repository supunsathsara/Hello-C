/*Use switch statement and write a program that reads an integer and determines and prints if the number is even or odd. (I.e. divisible by 2) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n % 2)
    {
    case 0:
        printf("%d is an even number", n);
        break;
    case 1:
        printf("%d is an odd number", n);
        break;
        }
}