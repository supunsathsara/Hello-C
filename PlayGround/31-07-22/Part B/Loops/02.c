/*Write a C program to calculate and print the total of 10 marks and the average. If the average is less than 50 program should print “Fail!” otherwise “Pass!”*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10], i, total = 0;
    printf("Enter 10 marks: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    printf("Total marks: %d\n", total);
    float avg = total / 10;
    if (avg < 50)
    {
        printf("Fail!\n");
    }
    else
    {
        printf("Pass!\n");
    }
}