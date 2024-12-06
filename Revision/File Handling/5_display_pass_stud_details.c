#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    int rollno, marks1, marks2, marks3;
    char name[50];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Student-%d Details\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &rollno);
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Enter Subject1 Marks: ");
        scanf("%d", &marks1);
        printf("Enter Subject2 Marks: ");
        scanf("%d", &marks2);
        printf("Enter Subject3 Marks: ");
        scanf("%d", &marks3);

        fprintf(fptr, "%d %s %d %d %d\n", rollno, name, marks1, marks2, marks3);
    }

    fclose(fptr);

    fptr = fopen("student.txt", "r");

    if (fptr == NULL)
    {
        printf("Could not open file!\n");
    }
    else
    {
        printf("Students who passed in all subjects:\n");
        printf("--------------------------------------\n");

        while (fscanf(fptr, "%d %s %d %d %d", &rollno, name, &marks1, &marks2, &marks3) != EOF)
        {
            if (marks1 >= 40 && marks2 >= 40 && marks3 >= 40)
            {
                printf("Roll No: %d\n", rollno);
                printf("Name: %s\n", name);
                printf("Subject1 Marks: %d\n", marks1);
                printf("Subject2 Marks: %d\n", marks2);
                printf("Subject3 Marks: %d\n", marks3);
                printf("Congratulations! You passed.\n\n");
            }
        }

        fclose(fptr);
    }
    printf("Program Executed By Akkal Dhami\n");

    return 0;
}
