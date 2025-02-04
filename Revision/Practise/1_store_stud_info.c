//? WAP to enter details of n student and store the data in a file.

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

    struct students s[n];
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
        fprintf(fptr, "%s %d %f\n", s[i].name, s[i].roll, s[i].GPA);
    }
    fclose(fptr);
    printf("Store Students Data Successfully!!\n");

    return 0;
}
