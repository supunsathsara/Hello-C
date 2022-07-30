/*Create a text-based, menu-driven program that allows the user to choose whether to calculate the circumference of a circle, the area of a circle or the volume of a sphere. The program should then input a radius from the user, perform the appropriate calculation and display the result. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float radius, area, circumference, volume;
    printf("Enter your choice: \n1. Circumference\n2. Area\n3. Volume\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter a radius: ");
        scanf("%f", &radius);
        circumference = 2 * 3.14 * radius;
        printf("The circumference of a circle with radius %.2f is %.2f\n", radius, circumference);
        break;
    case 2:
        printf("Enter a radius: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("The area of a circle with radius %.2f is %.2f\n", radius, area);
        break;
    case 3:
        printf("Enter a radius: ");
        scanf("%f", &radius);
        volume = (4 / 3) * 3.14 * radius * radius * radius;
        printf("The volume of a sphere with radius %.2f is %.2f\n", radius, volume);
        break;
    default:
        printf("Invalid choice\n");
    }
}