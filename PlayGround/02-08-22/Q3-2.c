/*2.	Write a program to accept number of covid cases of year 2021. Insert number of covid cases of each month to an array. Program should display the month which has minimum number of covid cases, the month which has maximum number of covid cases, total number of covid cases in 2021 and the months which are greater than average covid cases*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0, i, covidCases[12], minCovidCases, maxCovidCases, totalCovidCases, averageCovidCases, j;

    for (int i = 1; i < 13; i++)
    {
        printf("Enter the number of covid cases of month %d: ", i);
        scanf("%d", &covidCases[i - 1]);
        count += covidCases[i - 1];
    }
    minCovidCases = covidCases[0];
    maxCovidCases = covidCases[0];
    for (int i = 1; i < 12; i++)
    {
        if (covidCases[i] < minCovidCases)
        {
            minCovidCases = covidCases[i];
        }
        if (covidCases[i] > maxCovidCases)
        {
            maxCovidCases = covidCases[i];
        }
    }
    totalCovidCases = count;
    averageCovidCases = count / 12;
    printf("Total covid cases: %d\n", totalCovidCases);
    printf("Minimum covid cases: %d\n", minCovidCases);
    printf("Maximum covid cases: %d\n", maxCovidCases);
    printf("Average covid cases: %d\n", averageCovidCases);
    printf("\n-----\nMonths which are greater than average covid cases: \n");
    for (int i = 0; i < 12; i++)
    {
        if (covidCases[i] > averageCovidCases)
        {
            printf("Month %d: %d\n", i + 1, covidCases[i]);
        }
    }
}