/*
2.	Declare two single dimensional array with the size given by the user and find , display the followings;
•	Scalar Sum ( Adding values of each element of an array)
•	Vector Sum (Adding values of each relative elements of an array and store them in third array)
•	Vector Product (Multiply values of each relative elements of an array and store them in third array)
•	Scalar Product (Multiply values of each relative elements of an array and store them in third array. After placing the values in third array add all the values)

*/

#include <stdio.h>

void main()
{
    int arrSize, j, k, sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    printf("Enter the size of the array\n");
    scanf("%d", &arrSize);
    int a[arrSize], b[arrSize], c[arrSize];
    printf("Enter the values to the array 1\n");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the values to the array 2\n");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &b[i]);
    }

    // Scalar Sum
    for (int i = 0; i < arrSize; i++)
    {
        sum = sum + a[i];
    }
    for (int i = 0; i < arrSize; i++)
    {
        sum1 = sum1 + b[i];
    }
    printf("Scalar Sum is %d\n", sum + sum1);

    // Vector Sum
    for (int i = 0; i < arrSize; i++)
    {
        c[i] = a[i] * b[i];
    }
    for (int i = 0; i < arrSize; i++)
    {
        sum2 = sum2 + c[i];
    }
    printf("Vector Sum is %d\n", sum2);

    // Vector Product
    for (int i = 0; i < arrSize; i++)
    {
        c[i] = a[i] * b[i];
    }
    for (int i = 0; i < arrSize; i++)
    {
        sum3 = sum3 + c[i];
    }
    printf("Vector Product is %d\n", sum3);
    printf("Scalar Product is %d\n", sum3 + sum2);
}