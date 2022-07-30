/*Write a C program to add all user inputs until user input ‘-1’. And then display the sum */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != -1)
    {
        sum = sum + num;
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    printf("Sum of all numbers is %d", sum);
    return 0;
}