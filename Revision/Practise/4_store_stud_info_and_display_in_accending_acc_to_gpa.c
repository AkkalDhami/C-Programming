//? WAP to enter details of n student and store the data in a file display the stored data in accending order according to GPA.

#include <stdio.h>

struct students
{
    int roll;
    char name[30];
    float GPA;
};

int main()
{
    int n;
    printf("Enter the no of students: ");
    scanf("%d", &n);

    struct students s[n], temp;
    FILE *fptr;
    fptr = fopen("std.dat", "w");
    if (fptr == NULL)
    {
        printf("Error in Writing File!!!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of student-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Enter GPA: ");
        scanf("%f", &s[i].GPA);
        fprintf(fptr, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].GPA);
    }
    fclose(fptr);
    printf("Store Students Data Successfully!!\n");

    fptr = fopen("std.dat", "r");
    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fscanf(fptr, " %s %d %f", s[i].name, &s[i].roll, &s[i].GPA);
    }

    fclose(fptr);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].GPA > s[j].GPA)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents Data in accending order(By GPA):\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nName: %s\nRoll No: %d\nGPA: %.4f\n", s[i].name, s[i].roll, s[i].GPA);
    }
    printf("Display Students Data Successfully!!\n");

    return 0;
}