//? WAP to create a mark sheet using structure and find the grade of student based on the following criteria.
//? Marks < 100 and > 90 : A+
//? Marks < 90 and > 80 : A
//? Marks < 80 and > 70 : B+
//? Marks < 70 and > 60 : B
//? Marks < 60 and > 50 : C+
//? Marks < 50 and > 40 : C
//? Marks < 40 and >= 30 : D
//? Marks < 30 : Fail

#include <stdio.h>
#include <string.h>

struct students
{
    int roll;
    char name[30];
    float marks;
    char grade[10];
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct students s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of student-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        if (s[i].marks < 100 && s[i].marks > 90)
        {
            strcpy(s[i].grade, "A+");
        }
        else if (s[i].marks < 90 && s[i].marks > 80)
        {
            strcpy(s[i].grade, "A");
        }
        else if (s[i].marks < 80 && s[i].marks > 70)
        {
            strcpy(s[i].grade, "B+");
        }
        else if (s[i].marks < 70 && s[i].marks > 60)
        {
            strcpy(s[i].grade, "B");
        }
        else if (s[i].marks < 60 && s[i].marks > 50)
        {
            strcpy(s[i].grade, "C+");
        }
        else if (s[i].marks < 50 && s[i].marks > 40)
        {
            strcpy(s[i].grade, "C");
        }
        else if (s[i].marks < 40 && s[i].marks >= 30)
        {
            strcpy(s[i].grade, "D");
        }
        else
        {
            strcpy(s[i].grade, "Fail");
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nName: %s\nRoll No: %d\nMarks: %.2f\nGrade: %s\n", s[i].name, s[i].roll, s[i].marks, s[i].grade);
    }

    return 0;
}