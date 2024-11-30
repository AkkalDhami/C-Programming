#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("student.txt", "a");

    int rollno, marks1, marks2, marks3;
    char name[50];

    printf("\nEnter Student roll no: ");
    scanf("%d", &rollno);
    printf("Enter Student name: ");
    scanf("%s", name);
    printf("Enter subject1 marks: ");
    scanf("%d", &marks1);
    printf("Enter subject2 marks: ");
    scanf("%d", &marks2);
    printf("Enter subject3 marks:");
    scanf("%d", &marks3);

    fprintf(fptr, "%d %s %d %d %d\n", rollno, name, marks1, marks2, marks3);

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
        printf("\nRoll No: %d\nName: %s\nSubject1 Marks: %d\nSubject2 Marks: %d\nSubject3 Marks: %d\n", rollno, name, marks1, marks2, marks3);
    }

    fclose(fptr);
    printf("\nProgram is executed by Akkal Dhami\n");
    return 0;
}
