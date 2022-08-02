/*B.	A plant sales company will do N number of sales per day (N – User input value). Program must accept number of sales per month. Then calculate the average daily sales.
Find the number of days that they exceeded the average sales and display the message according to the following criteria.

No of days exceeding the average sales	Message
Average sale days >=15	Excellent
Average sale days >=10	Good
Average sale days >= 5	Need More Product Advertising
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salesPerDay, salesPerMonth, averageSales, averageSalesDays, i;
    float totalSales, totalSalesDays;
    printf("Enter the number of sales per day: ");
    scanf("%d", &salesPerDay);
    printf("Enter the number of sales per month: ");
    scanf("%d", &salesPerMonth);
    totalSales = salesPerDay * salesPerMonth;
    totalSalesDays = totalSales / salesPerDay;
    averageSales = totalSales / salesPerMonth;
    averageSalesDays = totalSalesDays / salesPerMonth;
    printf("Total sales: %f\n", totalSales);
    printf("Total sales days: %f\n", totalSalesDays);
    printf("Average sales: %f\n", averageSales);
    printf("Average sales days: %f\n", averageSalesDays);
    if (averageSalesDays >= 15)
    {
        printf("Excellent\n");
    }
    else if (averageSalesDays >= 10)
    {
        printf("Good\n");
    }
    else if (averageSalesDays >= 5)
    {
        printf("Need More Product Advertising\n");
    }
    else
    {
        printf("No sales\n");
    }
}