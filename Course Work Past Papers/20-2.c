#include <stdio.h>
#include <stdlib.h>

int i = 1;
int main()
{
    int ID, smsUsage, callUsage, freeMins;
    float smsCharge, callCharge, rental, totBill, total = 0;
    char type;
    for (i; i > 0; i++)
    {
        printf("Enter Customer %d ID: ", i);
        scanf("%d", &ID);
        if (ID == -111)
        {
            printf("All customers Bill total is %.2f\n", total);
            break;
        }
        printf("Enter Package type(A,B,C): ");
        scanf(" %s", &type);
        if (type == 'A')
        {
            callCharge = 1.50;
            smsCharge = 0.75;
            rental = 150;
            freeMins = 500;
        }
        else if (type == 'B')
        {
            callCharge = 1.75;
            smsCharge = 0.50;
            rental = 200;
            freeMins = 800;
        }
        else if (type == 'C')
        {
            callCharge = 2.00;
            smsCharge = 0.80;
            rental = 300;
            freeMins = 1000;
        }
        else
        {
            printf("Invalid Package Type!!!\n");
            main();
        }
        printf("Enter Number of SMS: ");
        scanf("%d", &smsUsage);
        printf("Enter number of outgoing minutes: ");
        scanf("%d", &callUsage);
        callUsage = callUsage - freeMins;
        if (callUsage < 0)
        {
            callUsage = 0;
        }

        totBill = rental + (callUsage * callCharge) + (smsUsage * smsCharge);
        printf("User %d's monthly rental is %.2f\n", ID, totBill);
        printf("----------------\n");
        total += total;
    }
}