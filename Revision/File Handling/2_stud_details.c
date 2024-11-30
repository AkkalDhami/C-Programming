#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("student.txt", "w");

    char name[50];
    int roll, sub[3];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter marks in three subjects: ");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &sub[j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "\nStudent-%d Details\n", i + 1);
        fprintf(file, "Roll No: %d\nName: %s\nMarks in Subject1: %d\nMarks in Subject2: %d\nMarks in Subject3: %d\n", roll, name, sub[0], sub[1], sub[2]);
    }
    fclose(file);

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("Could not open file \n");
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            fscanf(file, "%d\n%s\n%d\n %d\n%d\n", &roll, name, &sub[0], &sub[1], &sub[2]);
            printf("\nStudent-%d Details\n", i + 1);
            printf("Roll No: %d\nName: %s\nMarks in Subject1: %d\nMarks in Subject2: %d\nMarks in Subject3: %d\n", roll, name, sub[0], sub[1], sub[2]);
        }

        fclose(file);
        printf("\nProgram is executed by Akkal Dhami\n");
    }

    return 0;
}