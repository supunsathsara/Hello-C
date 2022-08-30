#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int total;
    char a;
    char name[100];

    // int -  number - d
    // float - decimal number - f
    // double - decimal number - f
    // char - character - c
    // char[] - string - s

    printf("Enter number 1: ");
    scanf("%d", &num1);

    /*
    Less than: a < b
    Less than or equal to: a <= b
    Greater than: a > b
    Greater than or equal to: a >= b
    Equal to a == b
    Not Equal to: a != b
    */

    if (num1 > 10)
    {
        printf("More than 10");
    }
    else if (num1 > 5)
    {
        printf("More than 5");
    }
    else
    {
        printf("Less than 10");
    }
}