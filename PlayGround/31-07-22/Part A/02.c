/*Input Marks of 10 students and output the maximum , minimum and average Marks.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10], max = 0, min = 0, sum = 0, average = 0, n;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks of student %d", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] > max)
        {
            max = marks[i];
        }
        if (marks[i] < min)
        {
            min = marks[i];
        }
        sum += marks[i];
    }
    average = sum / 10;
    printf("Maximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);
    printf("Average marks: %d\n", average);
}