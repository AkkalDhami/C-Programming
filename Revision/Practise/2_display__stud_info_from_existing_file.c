//? WAP to display the stored data of students from existing file/('std.dat').

#include <stdio.h>

struct students
{
    int roll;
    char name[30];
    float GPA;
};

int main()
{

    struct students s;
    FILE *fptr;
    fptr = fopen("std.dat", "r");
    if (fptr == NULL)
    {
        printf("Error in Opening File!!!\n");
        return 1;
    }

    while (fscanf(fptr, "%s %d %f\n", s.name, &s.roll, &s.GPA) != EOF)
    {
        printf("\n\nName: %s\nRoll No: %d\nGPA: %.2f\n", s.name, s.roll, s.GPA);
    }
    fclose(fptr);
    printf("Display Students Data Successfully!!\n");

    return 0;
}
