#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    int n;
    printf("Enter no. of Student that You want: ");
    scanf("%d", &n);

    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n===Enter the Details Of Student-%d=== \n", i + 1);

        printf("Enter the Student-%d Roll: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("Enter the Student-%d Name: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter the Student-%d Marks: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n***Details Of the Student-%d***\n", i + 1);
        printf("\nRoll : %d\n", s[i].roll);
        printf("Name : %s\n", s[i].name);
        printf("Grade : %.2f\n", s[i].marks);
    }

    printf("\nProgram Executed By Akkal Dhami..\n\n");

    return 0;
}