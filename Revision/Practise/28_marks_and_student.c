//? write a program in C to read the marks of 5 subjects of any n students from a file "marks.dat" and calculate total marks and average marks. Also print all the information in appropriate format.

#include <stdio.h>

struct Student
{
    char name[50];
    int marks[5];
    int total;
    float average;
};

int main()
{
    int n, i, j;
    FILE *file;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    file = fopen("marks.dat", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nEnter student details:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter 5 subject marks for %s\n", s[i].name);
        for (j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
        }

        fprintf(file, "%s ", s[i].name);
        for (j = 0; j < 5; j++)
        {
            fprintf(file, "%d ", s[i].marks[j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);

    file = fopen("marks.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        fscanf(file, "%s", s[i].name);
        s[i].total = 0;

        for (j = 0; j < 5; j++)
        {
            fscanf(file, "%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].average = s[i].total / 5.0;
    }

    fclose(file);

    printf("\n---------------------------------------------------------\n");
    printf("| %-10s | %-15s | %-10s | %-10s |\n", "No.", "Name", "Total", "Average");
    printf("---------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("| %-10d | %-15s | %-10d | %-10.2f |\n", i + 1, s[i].name, s[i].total, s[i].average);
    }

    printf("---------------------------------------------------------\n");

    return 0;
}
