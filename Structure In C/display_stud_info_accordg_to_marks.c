//WAP in C that uses a structure to display the names and marks of 20 students and sorts them in descending order based on their marks:

#include <stdio.h>
struct student
{
    char name[50];
    float marks;
};

int main()
{
    int i, j;
    struct student s[20];
    struct student temp;
    for (i = 0; i < 20; i++)
    {
        printf("\nEnter Student-%d Name: ", i+1);
        scanf("%s", s[i].name);

        printf("Enter Student-%d Marks: ", i+1);
        scanf("%f", &s[i].marks);
    }
    for (i = 0; i < 20; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents marks in descending order:\n");
    printf("Name\t\tMarks\n");
    for (i = 0; i < 20; i++)
    {
        printf("%s\t\t%.2f\n", s[i].name, s[i].marks);
    }

    return 0;
}
