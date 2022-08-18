/*1.	RTX Company decided to give awards to senior employees. Write a program to accept employee number, designation and years of working of 50 employees.  Display the employee number of employees who have at least 10 years of working experience with RTX company and numbers of employees who are eligible for the awards. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0, i, employeeNumber, yearsOfWorking, eligibleEmployees[4] = {0};
    char designation;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the employee number: ");
        scanf("%d", &employeeNumber);
        printf("Enter the designation: ");
        scanf("%s", &designation);
        printf("Enter the years of working: ");
        scanf("%d", &yearsOfWorking);
        if (yearsOfWorking >= 10)
        {
            eligibleEmployees[count] = 0;
            eligibleEmployees[count] = employeeNumber;
            count++;
        }
    }
    printf("\nEligible Employees are:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", eligibleEmployees[i]);
    }

    printf("Number of employees who are eligible for the awards: %d\n", count);
}