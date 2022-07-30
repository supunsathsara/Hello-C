/*Write a C program to calculate the sum of all digits of a user given number.
• If user input 123 your program should output 6. (calculated as 1+2+3)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
}