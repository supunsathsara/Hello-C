#include <stdio.h>
#include <stdlib.h>
char *fuelTypes[3] = {"Petrol", "Diesel", "LPG"};
int FuelQty[3] = {0, 0, 0};
float FuelPrice[3];
int currentFuelQty[3] = {0, 0, 0};

// Function 01
void addFuelDetails()
{
    for (int i = 0; i < 3; i++)
    {
        {
            int fuelType = i;
            printf("Enter Fuel Starting Quantity of %s: ", fuelTypes[fuelType]);
            scanf("%d", &FuelQty[fuelType]);
            printf("Enter Unit Price of %s: ", fuelTypes[fuelType]);
            scanf("%f", &FuelPrice[fuelType]);
            printf("\n");
        }
    }
}

int getPumpingDetails()
{
    int fuelType;
    for (int i = 1; i > 0; i++)
    {
        int QTY = 0;
        printf("Pumping Details:\n");
        printf(" 1- Petrol\n 2- Diesel\n 3- LPG\n 4- Exit\n");
        printf("Choose Fuel Type of vehicle %d: ", i);
        scanf("%d", &fuelType);
        if (fuelType == 4)
        {
            break;
        }
        printf("Enter quantity pumped for vehicle %d(L): ", i);
        scanf("%d", &QTY);
        if (QTY > FuelQty[fuelType - 1])
        {
            printf("Insufficient Fuel\n");
            printf(" Going for the Next Vehicle\n");
            continue;
        }

        currentFuelQty[fuelType - 1] += QTY;
    }
    return 0;
}

void showFuelDetails()
{
    printf("\n------\nTotal Quantity Pumped\n------\n");
    for (int i = 0; i < 3; i++)
    {
        printf(" %s: %d\n", fuelTypes[i], currentFuelQty[i]);
    }
    printf("\n------\nRemaining Fuel Quantity\n------\n");

    for (int i = 0; i < 3; i++)
    {
        printf(" %s: %d\n", fuelTypes[i], FuelQty[i] - currentFuelQty[i]);
    }
}

int main()
{
    addFuelDetails();
    getPumpingDetails();
    showFuelDetails();
    return 0;
}