/*Write a C program to print first 10 numbers of “Fibonacci Sequence”. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 1, n3, i;
    printf("%d %d", n1, n2);
    for (i = 2; i < 10; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}