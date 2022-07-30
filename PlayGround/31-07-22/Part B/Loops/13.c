/*Write a C program to read user inputs for an integer array (size = 10) and print the array. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}