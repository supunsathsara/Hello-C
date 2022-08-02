/*a.	The passenger management system of Katunayake airport requests passport number, destination country, visa type (Student visa – 1, Working Visa – 2, Tourist Visa –3, Immigration –4). You may write the following 3 functions using c programming language.
Function 1 : Read above details for any number of passengers. In order to stop entering details user may enter –111 as the passport number.
Function 2: Calculate following important information
1 . Total passengers left in the day
2. % of passengers left for study purpose
3.% of passengers left for working
4. % of passengers left for travel purpose
5. % of passengers left as immigrants
Function 03: Display above calculated information
*/

#include <stdio.h>
#include <stdlib.h>

int studentCount = 0, workingCount = 0, touristCount = 0, immigrationCount = 0;
float percentages[4] = {0, 0, 0, 0}; // student,working,tourist,immigration
int getData()
{
    int count;
    int passportNum, visaType;
    char destination;

    for (int i = 1; i > 0; i++)
    {
        printf("Enter the passport number: ");
        scanf("%d", &passportNum);
        if (passportNum == -111)
        {
            break;
        }
        printf("Enter the destination country: ");
        scanf("%c", &destination);
        printf("Visa type\n");
        printf("1. Student visa\n2. Working visa\n3. Tourist visa\n4. Immigration\n");
        printf("Enter the visa type: ");
        scanf("%d", &visaType);
        if (visaType == 1)
        {
            studentCount++;
        }
        else if (visaType == 2)
        {
            workingCount++;
        }
        else if (visaType == 3)
        {
            touristCount++;
        }
        else if (visaType == 4)
        {
            immigrationCount++;
        }
        else
        {
            printf("Invalid visa type\n");
            count--;
        }
        count++;
    }
    return 0;
}

int calculation(count)
{
    percentages[0] = (studentCount / count) * 100;
    percentages[1] = (workingCount / count) * 100;
    percentages[2] = (touristCount / count) * 100;
    percentages[3] = (immigrationCount / count) * 100;
    return count;
}

void printDetails(count)
{
    printf("Total passengers left in the day: %d\n", count);
    printf("%d%% of passengers left for study purpose\n", percentages[0]);
    printf("%d%% of passengers left for working\n", percentages[1]);
    printf("%d%% of passengers left for travel purpose\n", percentages[2]);
    printf("%d%% of passengers left as immigrants\n", percentages[3]);
}

int main()
{
    int count;
    count = getData();
    calculation(count);
    printDetails(count);
}