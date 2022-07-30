/*1.	Input 10 numbers and to output number of positive, number of negative, number of zeros. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positiveCount = 0, negativeCount = 0, zeroCount = 0, n;
    for (int i = 1; i < 11; i++)
    {
        printf("Enter number %d", i);
        scanf("%d", &n);
        if (n > 0)
        {
            positiveCount++;
        }
        else if (n < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }
    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zero numbers: %d\n", zeroCount);
}