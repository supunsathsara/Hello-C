/*
1.	Declare a multi-dimensional array with the size of 3 x 4 (3 rows and 4 columns)
Input the values in to array and display the followings;
a.	Display the values in the form of matrix
b.	Display the average value
c.	Display the highest value

*/

#include <stdio.h>

void main()
{
    int a[3][4], i, j, sum = 0, avg;
    printf("Enter the values to the array\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter the values to the array row %d\n", i);
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // display the values in a matrix form
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // display the average value
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum = sum + a[i][j];
        }
    }
    avg = sum / 12;
    printf("Average value is %d\n", avg);

    // display the highest value
    int max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            a[i][j] > max ? max = a[i][j] : max;
        }
    }
    printf("Highest value is %d\n", max);
}