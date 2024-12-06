#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float marks[3];
    float total;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        printf("Enter Student-%d ID: ", i + 1);
        scanf("%d", &s[i].id);
        printf("Enter Student-%d Name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks for subject out of 100\n");
        for (j = 0; j < 3; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("Student %d Details: ", i + 1);
        printf("\nStudent ID-%d: %d\n", i + 1, s[i].id);
        printf("Student Name-%d: %s\n", i + 1, s[i].name);
        printf("Marks in 3 subjects out of 100: \n");
        for (j = 0; j < 3; j++)
        {
            printf("Subject %d: %.2f\n", j + 1, s[i].marks[j]);
        }
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Percentage: %.2f\n", (s[i].total / 300.0 * 100.0));
    }
    printf("\nProgram Executed By Akkal Dhami..\n\n");

    return 0;
}
