#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void writeToFile(int n)
{
    FILE *file;
    struct Student student;

    // Open the file in write mode
    file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    // Get details from the user and write to the file
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &student.rollNo);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Marks: ");
        scanf("%f", &student.marks);

        // Write to file
        fprintf(file, "%d %s %.2f\n", student.rollNo, student.name, student.marks);
    }

    // Close the file
    fclose(file);
}

void readFromFile()
{
    FILE *file;
    struct Student student;

    // Open the file in read mode
    file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    printf("\nStudent Details:\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-----------------------------------\n");

    // Read and display student details from the file
    while (fscanf(file, "%d %49s %f", &student.rollNo, student.name, &student.marks) == 3)
    {
        printf("%d\t%-15s%.2f\n", student.rollNo, student.name, student.marks);
    }

    // Close the file
    fclose(file);
}

int main()
{
    int n;

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Write student details to file
    writeToFile(n);

    // Read and display student details from file
    readFromFile();

    return 0;
}
