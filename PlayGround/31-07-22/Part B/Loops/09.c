/*Write a C program to print all the ASCII values for letters A to Z. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 65; i <= 90; i++)
    {
        printf("%c:%d\t", i, i);
    }
    return 0;
}