//? Develop a program in C using structure to enter the roll_number, name, and marks scored in sub1, sub2, and sub3 of n students. Also, display them in proper format along with the calculation of total and percentage. [Note: the marks should be between 0 and 100].

#include <stdio.h>

struct student
{
    int roll_number;
    char name[50];
    float sub1, sub2, sub3;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the following details of student-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_number);

        printf("Enter Subject-1 Marks: ");
        scanf("%f", &s[i].sub1);

        printf("Enter Subject-2 Marks: ");
        scanf("%f", &s[i].sub2);

        printf("Enter Subject-3 Marks: ");
        scanf("%f", &s[i].sub3);
    }
    printf("Name\tRoll No\tSub1 Marks\tSub2 Marks\tSub3 Marks\tTotal Marks\tPercentage\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f%\n", s[i].name, s[i].roll_number, s[i].sub1, s[i].sub2, s[i].sub3, s[i].sub1 + s[i].sub2 + s[i].sub3, (s[i].sub1 + s[i].sub2 + s[i].sub3) / 300 * 100);
    }

    return 0;
}