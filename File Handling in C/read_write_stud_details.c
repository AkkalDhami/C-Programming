#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *file;
    struct Student student;

    file = fopen("studentDetails.txt", "w");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &student.rollNo);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Marks: ");
        scanf("%f", &student.marks);

        fprintf(file, "%d %s %.2f\n", student.rollNo, student.name, student.marks);
    }

    fclose(file);


    file = fopen("studentDetails.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    printf("\nStudent Details:\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-----------------------------------\n");

    while (fscanf(file, "%d %49s %f", &student.rollNo, student.name, &student.marks) == 3)
    {
        printf("%d\t%-15s%.2f\n", student.rollNo, student.name, student.marks);
    }

    fclose(file);

    return 0;
}
