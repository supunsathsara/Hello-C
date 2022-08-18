/*a.	Write a c program to accept student id, name and marks of students who have completed PF module.
i.	Write the student id, name, marks and grade (‘Pass’ if the marks greater than 50, ‘Fail’ if the marks less than 50) into a text file named ‘Result.txt’.
ii.	Read the above data file and display.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, studentId, marks;
    char name[20];
    FILE *fp;
    char str1;
    fp = fopen("Result.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file");
        exit(1);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Enter the student id: ");
        scanf("%d", &studentId);
        printf("Enter the name: ");
        scanf("%s", name);
        printf("Enter the marks: ");
        scanf("%d", &marks);
        if (marks > 50)
        {
            fprintf(fp, "Student id: %d\n", studentId);
            fprintf(fp, "Name: %s\n", name);
            fprintf(fp, "Marks: %d\n", marks);
            fprintf(fp, "Grade: Pass\n");
        }
        else
        {
            fprintf(fp, "Student id: %d\n", studentId);
            fprintf(fp, "Name: %s\n", name);
            fprintf(fp, "Marks: %d\n", marks);
            fprintf(fp, "Grade: Fail\n");
        }
    }
    fclose(fp);
    fp = fopen("Result.txt", "r");
    printf("\n-----\n");
    while (str1 != EOF)
    {
        str1 = fgetc(fp);
        printf("%c", str1);
    }
    fclose(fp);
}