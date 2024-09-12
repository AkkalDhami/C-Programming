#include <stdio.h>

struct Student
{
    int id;
    float marks[5];
    float total;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    int i, j;

    s[0].total = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter Student-%d ID: ", i + 1);
        scanf("%d", &s[i].id);
        printf("Enter marks for subject\n");
        for (j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\nStudent ID-%d: %d\n", i + 1, s[i].id);
        printf("Marks in 5 subjects: \n");
        for (j = 0; j < 5; j++)
        {
            printf("Subject %d: %.2f\n", j + 1, s[i].marks[j]);
        }
        printf("Total Marks: %.2f\n", s[i].total);
    }

    return 0;
}
