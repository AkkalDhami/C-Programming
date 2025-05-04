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
    int n;
    printf("Enter a no. of student: ");
    scanf("%d", &n);

    struct student s[n], temp;
    FILE *fptr;
    fptr = fopen("stud2.dat", "w");

    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the following details of student-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter GPA: ");
        scanf("%f", &s[i].gpa);

        fprintf(fptr, "%s %d %f\n", s[i].name, s[i].roll, s[i].gpa);
    }
    fclose(fptr);

    fptr = fopen("stud2.dat", "r");

    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fscanf(fptr, "%s %d %f", s[i].name, &s[i].roll, &s[i].gpa);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudent Info in ascending order by name\n");
    printf("Name\t\tRoll\t\tGPA\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%.2f\n", s[i].name, s[i].roll, s[i].gpa);
    }

    fclose(fptr);
    return 0;
}