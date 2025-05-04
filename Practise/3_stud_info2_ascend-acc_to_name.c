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
    struct student s[100], temp;
    char ch[2];
    FILE *fptr;
    int n = 0;
    fptr = fopen("stud3.dat", "w");

    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }
    printf("Enter the following details of student\n");
    do
    {
        printf("Enter Name: ");
        scanf("%s", s[n].name);

        printf("Enter Roll no: ");
        scanf("%d", &s[n].roll);

        printf("Enter GPA: ");
        scanf("%f", &s[n].gpa);

        fprintf(fptr, "%s %d %f\n", s[n].name, s[n].roll, s[n].gpa);
        printf("\nDo you want to add new student record (Y/N)? ");
        scanf("%s", ch);
        n++;
    } while (strcmp(strlwr(ch), "y") == 0);
    fclose(fptr);

    fptr = fopen("stud3.dat", "r");

    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }
    n = 0;
    while (fscanf(fptr, "%s %d %f", s[n].name, &s[n].roll, &s[n].gpa) != EOF)
    {
        n++;
    }
    fclose(fptr);
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
    printf("Name\t\tRoll\t\tGPA\n");
    for (int j = 0; j < n; j++)
    {
        printf("%s\t\t%d\t\t%.2f\n", s[j].name, s[j].roll, s[j].gpa);
    }

    return 0;
}