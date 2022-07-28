#include <stdio.h>
#include <stdlib.h>

int id;
void displayEmployee()
{
    int id;
    char name[20], address[20], DOB[20];
    printf("Enter employee number: ");
    scanf("%d", &id);
    printf("Enter employee name: ");
    scanf("%s", &name);
    printf("Enter employee address: ");
    scanf("%s", &address);
    printf("Enter employee DOB: ");
    scanf("%s", &DOB);
    printf("\n");
    printf("Employee number: %d\n", id);
    printf("Employee name: %s\n", name);
    printf("Employee address: %s\n", address);
    printf("Employee DOB: %s\n", DOB);
}

int monthlySalary(int month)
{
    int OThrs, noPayDays;
    int basicSalary, OT, noPay;
    static char type;
    float grossSalary;
    if (month == 0 || month == 1)
    {
        printf("Enter employee number: ");
        scanf("%d", &id);
        printf("Enter employee type: ");
        scanf("%s", &type);
    }
    char *months[13] = {"this month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter employee OThrs for %s: ", months[month]);
    scanf("%d", &OThrs);
    printf("Enter employee no pay days for %s: ", months[month]);
    scanf("%d", &noPayDays);
    if (type == 'A')
    {
        basicSalary = 20000;
        OT = 1000;
        noPay = 800;
    }
    else if (type == 'B')
    {
        basicSalary = 25000;
        OT = 1300;
        noPay = 1000;
    }
    else if (type == 'C')
    {
        basicSalary = 30000;
        OT = 1500;
        noPay = 1200;
    }
    else
    {
        printf("Invalid employee type\n");
        monthlySalary(month);
    }
    grossSalary = basicSalary + (OThrs * OT) - (noPay * noPayDays);

    return grossSalary;
}
int main()
{
    int choice;
    printf("-----------------\n");
    printf("1 - View Details of an Employee\n");
    printf("2 - View Monthly Salary\n");
    printf("3 - View Yearly Salary\n");
    printf("-----------------\n");
    printf("choose an option: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        displayEmployee();
    }
    else if (choice == 2)
    {
        float salary = monthlySalary(0);
        printf("\n");
        printf("\n");
        printf("Employee %d's salary is %.2f", id, salary);
    }
    else if (choice == 3)
    {
        float total = 0;
        for (int i = 1; i < 13; i++)
        {
            total += monthlySalary(i);
        }
        printf("\n");
        printf("Total yearly salary is %.2f", total);
    }
    else
    {
        printf("Invalid choice\n");
        main();
    }
    return 0;
}