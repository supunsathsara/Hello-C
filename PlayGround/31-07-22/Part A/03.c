/*Input price of 10 items and display the average value of an Item , number of items which the price is greater than 200.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price[10], average = 0;
    int count = 0, n;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter price of item %d", i + 1);
        scanf("%f", &price[i]);
        average += price[i];
        if (price[i] > 200)
        {
            count++;
        }
    }
    average = average / 10;
    printf("Average price: %.2f\n", average);
    printf("Number of items which the price is greater than 200: %d\n", count);
}