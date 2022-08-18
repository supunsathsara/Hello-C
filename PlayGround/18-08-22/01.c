/*
1.	Declare a Single dimensional array with 10 elements. Input the values to the array and find the followings;
I.	Minimum value
II.	Maximum value
III.	Average value
IV.	Reverse order of values
*/

#include <stdio.h>

void main()
{
    int a[10], i, j, min, max, sum = 0, avg;
    printf("Enter the values to the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
        sum = sum + a[i];
    }

    printf("Minimum value is %d\n", min);
    printf("Maximum value is %d\n", max);
    avg = sum / 10;
    printf("Average value is %d\n", avg);
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}