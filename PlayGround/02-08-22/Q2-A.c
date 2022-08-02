/*A.	In an online ordering system, customers have been categorized into ‘Regular’ and ‘Non-regular’to allow the discount.
a.	System will accept the customer no , password and the order value, they will be categorized as follows:

Even number -Regular
Odd number -Non-Regular

Regular customers will be given a 10% discount from the order value. Non-regular customers are given a 5% discount.
Display the Customer number, Customer type, Net value of the order
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int customerNumber;
    char customerType, password;
    float orderValue, netValue;
    printf("Enter the customer number: ");
    scanf("%d", &customerNumber);
    if (customerNumber % 2 == 0)
    {
        customerType = 'Regular';
    }
    else
    {
        customerType = 'Non-Regular';
    }
    printf("Enter the password: ");
    scanf("%c", &password);
    printf("Enter the order value: ");
    scanf("%f", &orderValue);
    if (customerType == 'Regular')
    {
        netValue = orderValue - (orderValue * 0.1);
    }
    else
    {
        netValue = orderValue - (orderValue * 0.05);
    }
    printf("Customer number: %d\n", customerNumber);
    printf("Customer type: %c\n", customerType);
    printf("Net value of the order: %f\n", netValue);
}