/*Re-Write the above code to count all the even numbers in above integer array and display the count.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int count = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("Number of even numbers in array is %d", count);
    return 0;
}