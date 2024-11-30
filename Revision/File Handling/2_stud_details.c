#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("student.txt", "w");

    int rollno, marks1, marks2, marks3;
    char name[50];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Student-%d Details\n", i+1);
        printf("Enter roll no: ");
        scanf("%d", &rollno);
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Enter marks 1: ");
        scanf("%d", &marks1);
        printf("Enter marks 2: ");
        scanf("%d", &marks2);
        printf("Enter marks 3: ");
        scanf("%d", &marks3);

        fprintf(fptr, "%d %s %d %d %d\n", rollno, name, marks1, marks2, marks3);
    }

    fclose(fptr);

    fptr = fopen("student.txt", "r");
    if (fptr == NULL)
    {
        printf("Error! Could not open file for reading.\n");
        return 1;
    }

    printf("\nStudent Details from File:\n");
    while (fscanf(fptr, "%d %s %d %d %d", &rollno, name, &marks1, &marks2, &marks3) == 5)
    {
        printf("\nRoll No: %d\nName: %s\nMarks 1: %d\nMarks 2: %d\nMarks 3: %d\n", rollno, name, marks1, marks2, marks3);
    }

    fclose(fptr);
    printf("\nProgram is executed by Akkal Dhami\n");
    return 0;
}
