/*
2.	Declare two multi-dimensional square matrices and display the matrix sum, matrix product and matrix transpose.
*/

#include <stdio.h>

void main()
{
    int a[3][3], b[3][3], i, j, k, sum = 0, sum1 = 0, sum2 = 0;
    printf("Enter the values to the array 1\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter the values to the array 1 row %d\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values to the array 2\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter the values to the array 2 row %d\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // matrix sum
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum1 = sum1 + b[i][j];
        }
    }
    printf("\nMatrix sum is %d\n", sum + sum1);

    // matrix product
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum2 = sum2 + a[i][j] * b[i][j];
        }
    }
    printf("Matrix product is %d\n", sum2);

    // matrix transpose
    printf("\nMatrix transpose is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
