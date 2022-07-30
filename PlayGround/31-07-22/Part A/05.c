/*Input employee number, and hours worked by employees, and to display the following:
Employee number, Over Time Payment, and the percentage of employees whose Over Time Payment exceeding the Rs. 4000/-.
The user should input –999 as employee number to end the program, and the normal Over Time      Rate is Rs.150 per hour and Rs. 200 per hour for hours in excess of 40
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeeNo, hoursWorked, overTimePayment, overTimeRate, overTimeRateExcess, count = 0;
    printf("Enter Employee no and Hours Worked\n");
    scanf("%d%d", &employeeNo, &hoursWorked);
    while (employeeNo != -999)
    {
        if (hoursWorked > 40)
        {
            overTimeRate = 150;
            overTimeRateExcess = 200;
            overTimePayment = overTimeRate * (hoursWorked - 40) + overTimeRateExcess * (hoursWorked - 40);
        }
        else
        {
            overTimePayment = overTimeRate * hoursWorked;
        }
        printf("Employee no: %d\n", employeeNo);
        printf("Over Time Payment: %d\n", overTimePayment);
        if (overTimePayment > 4000)
        {
            count++;
        }
        printf("\n-----\nEnter Next Employee no and Hours Worked\n");
        scanf("%d%d", &employeeNo, &hoursWorked);
    }
    printf("Number of Employees whose Over Time Payment exceeding the Rs. 4000/-: %d\n", count);
}