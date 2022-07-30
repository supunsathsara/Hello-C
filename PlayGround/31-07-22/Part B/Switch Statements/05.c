/*Write a C program to read a character from the user and determine whether the given letter is vowel or not. (Use a switch statement which also includes ‘default’ state). */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a character: ");
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel\n", ch);
        break;
    default:
        printf("%c is a consonant\n", ch);
    }
}