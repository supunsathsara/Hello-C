/*Write a C program to print numbers from 0 to 100. (You are required to write 3 separate answers each using While, Do..While, For, looping structures). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // while loop
    int i = 0;
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }

    // Do-While loop
    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 100);

    // For loop
    for (i = 0; i <= 100; i++)
    {
        printf("%d\n", i);
    }
}