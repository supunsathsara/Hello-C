#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str1;
    fp = fopen("hello.txt", "r");
    printf("\n-----\n");
    while (str1 != EOF)
    {
        str1 = fgetc(fp);
        printf("%c", str1);
    }
    fclose(fp);
}