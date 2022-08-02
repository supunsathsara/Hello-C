/*1.	RTX Company decided to give awards to senior employees. Write a program to accept employee number, designation and years of working of 50 employees.  Display the employee number of employees who have at least 10 years of working experience with RTX company and numbers of employees who are eligible for the awards. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0, i, employeeNumber, designation, yearsOfWorking;
    for (i = 0; i < 50; i++)
    {
        printf("Enter the employee number: ");
        scanf("%d", &employeeNumber);
        printf("Enter the designation: ");
        scanf("%d", &designation);
        printf("Enter the years of working: ");
        scanf("%d", &yearsOfWorking);
        if (yearsOfWorking >= 10)
        {
            count++;
            printf("Employee number: %d\n", employeeNumber);
        }
    }
    printf("Number of employees who are eligible for the awards: %d\n", count);
}