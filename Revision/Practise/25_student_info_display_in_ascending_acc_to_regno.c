//?  Write a C program to store registration number, name and marks of n students using structure and display them in ascending order on the basis of registration number.

#include <stdio.h>

struct students
{
    int reg_no;
    char name[30];
    float marks;
};

int main()
{
    int n;
    printf("Enter the no of students: ");
    scanf("%d", &n);

    struct students s[n], temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of student-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Registration No: ");
        scanf("%d", &s[i].reg_no);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].reg_no > s[j].reg_no)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents Data in accending order(By Registration No):\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n\nName: %s\nRegistration No: %d\nMarks: %.2f", s[i].name, s[i].reg_no, s[i].marks);
    }

    return 0;
}