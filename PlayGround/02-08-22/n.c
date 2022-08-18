/*1.	RTX Company decided to give awards to senior employees. Write a program to accept employee number, designation and years of working of 50 employees.  Display the employee number of employees who have at least 10 years of working experience with RTX company and numbers of employees who are eligible for the awards. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0, yearsOfWorking;
    char designation, employeeNumber;
    char eligibleEmployees[50][2] = {""};
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the employee number: ");
        scanf("%s", &employeeNumber);
        printf("Enter the designation: ");
        scanf("%s", &designation);
        printf("Enter the years of working: ");
        scanf("%d", &yearsOfWorking);
        if (yearsOfWorking >= 10)
        {
            strcpy(eligibleEmployees[i][0], employeeNumber);
            strcpy(eligibleEmployees[i][1], designation);
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("Employee number: %s - Designation:%s\n", eligibleEmployees[0][i], eligibleEmployees[1][i]);
    }

    printf("Number of employees who are eligible for the awards: %d\n", count);
}