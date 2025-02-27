//? Demonstrate a C program to input the age of any n students and count how many students are in the age group between 15 to 20 using an array of structures.

#include <stdio.h>

struct students
{
    int age;
};

int main()
{
    int n;
    printf("Enter no of student: ");
    scanf("%d", &n);

    int count = 0;
    struct students s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the age of student-%d: ", i + 1);
        scanf("%d", &s[i].age);
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i].age <= 20 && s[i].age >= 15)
        {
            count++;
        }
    }

    printf("Total no of student in the age group between 15 and 20: %d", count);

    return 0;
}