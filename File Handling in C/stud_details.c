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
    FILE *file;
    struct Student student;

    file = fopen("test.txt", "r");
    if (file == NULL)
    {
        
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Student Details:\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-----------------------------------\n");


    while (fscanf(file, "%d %49s %f", &student.rollNo, student.name, &student.marks) == 3)
    {
        printf("%d\t%-15s%.2f\n", student.rollNo, student.name, student.marks);
    }

    fclose(file);
    return 0;
}
