#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[30];
    float gpa;
};

int main()
{
    struct student s;
    char ch[2];
    FILE *fptr;
    fptr = fopen("stud.dat", "w");

    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }
    printf("Enter the following details of student\n");
    do
    {
        printf("Enter Name: ");
        scanf("%s", s.name);

        printf("Enter Roll no: ");
        scanf("%d", &s.roll);

        printf("Enter GPA: ");
        scanf("%f", &s.gpa);

        fprintf(fptr, "%s %d %f\n", s.name, s.roll, s.gpa);
        printf("\nDo you want to add new student record (Y/N)? ");
        scanf("%s", ch);
    } while (strcmp(strlwr(ch), "Y") == 0);
    fclose(fptr);

    fptr = fopen("stud.dat", "r");

    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }
    printf("Name\t\tRoll\t\tGPA\n");
    while (fscanf(fptr, "%s %d %f", s.name, &s.roll, &s.gpa) != EOF)
    {
        printf("%s\t\t%d\t\t%.2f\n", s.name, s.roll, s.gpa);
    }

    fclose(fptr);
    return 0;
}