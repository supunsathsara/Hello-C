/*Write a C program to enter month number and print total number of days in month using switch case. First assume that the given month belongs to a non-leap year.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
start:
    int month, days;
    printf("Enter a month number: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        days = 28;
        break;
    default:
        printf("Wrong Input");
        goto start;
    }
    printf("Number of days in %d is %d\n", month, days);
}