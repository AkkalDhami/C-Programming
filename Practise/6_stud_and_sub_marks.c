#include <stdio.h>

struct student
{
    int roll;
    char name[60];
    float marks[3];
};

int main()
{
    int n;
    printf("Enter a no. of student: ");
    scanf("%d", &n);

    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Student-%d Details\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Sub-%d Marks: ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        float total = 0;
        printf("\nStudent-%d Details: ", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].roll);
        for (int j = 0; j < 3; j++)
        {
            printf("\nSub-%d Marks: %.2f", j + 1, s[i].marks[j]);
            total += s[i].marks[j];
        }
        float percentage = total / 3;
        printf("\nTotal Marks: %.2f", total);
        printf("\nPercentage: %.2f%%", percentage);
    }

    return 0;
}