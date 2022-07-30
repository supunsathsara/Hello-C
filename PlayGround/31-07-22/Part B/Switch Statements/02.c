/*Write a simple menu driven calculator to perform (+ - / *) operations. (The program must display a menu to select the desired operator.) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, choice;
    float result;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Enter your choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = n1 + n2;
        printf("%d + %d = %.2f\n", n1, n2, result);
        break;
    case 2:
        result = n1 - n2;
        printf("%d - %d = %.2f\n", n1, n2, result);
        break;
    case 3:
        result = n1 * n2;
        printf("%d * %d = %.2f\n", n1, n2, result);
        break;
    case 4:
        result = (float)n1 / n2;
        printf("%d / %d = %.2f\n", n1, n2, result);
        break;
    default:
        printf("Invalid choice\n");
    }
}