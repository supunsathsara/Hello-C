#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks1;
    float marks2;
    printf("Enter subject 1 marks: ");
    scanf("%f", &marks1);
    printf("Enter subject 2 marks: ");
    scanf("%f", &marks2);

    float total;
    total = marks1 + marks2;

    /*
    A -75
    B - 65
    C - 50
    F
    */

    if (total >= 75)
    {
        printf("You got an A");
    }
    else if (total >= 65)
    {
        printf("You got a B");
    }
    else if (total >= 50)
    {
        printf("You got a C");
    }
    else
    {
        printf("You got a F");
    }
}