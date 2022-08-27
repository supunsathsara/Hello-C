#include <stdio.h>
#include <stdlib.h>

int main()
{

    // code
    // printf("Hello world\n");

    // int -  number - d
    // float - decimal number - f
    // double - decimal number - f
    // char - character - c

    int x = 5;
    float y = 5.2;
    double z = 5.85;
    char c = 'A';
    char d[] = "Hello";

    printf("%d", x);
    printf("%f", y);
    // hello world 5
    printf("Hello world %d\n", x);
    // two variables
    printf("x is %d y is %f\n", x, y);
    // printf("print", variables)

    // add two numbers
    int num1 = 5;
    int num2 = 10;
    int num1, num2;
    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    int total = num1 + num2;
    printf("%d is the total", num1 + num2);
}

// x = 10
// y =15.6

// x value is 10 and y value 15.6