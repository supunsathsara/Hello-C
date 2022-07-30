/*Input the Employee no  and the Basic Salary of the  Employees in an organisation ending with the  dummy value -999  for  Employee no  and count the number Employees whose Basic Salary  >=5000. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeeNo, basicSalary, count = 0;
    printf("Enter Employee no and Basic Salary\n");
    scanf("%d%d", &employeeNo, &basicSalary);
    while (employeeNo != -999)
    {
        if (basicSalary >= 5000)
        {
            count++;
        }
        printf("\n-----\nEnter Next Employee no and Basic Salary\n");
        scanf("%d%d", &employeeNo, &basicSalary);
    }
    printf("Number of Employees whose Basic Salary >=5000: %d\n", count);
}