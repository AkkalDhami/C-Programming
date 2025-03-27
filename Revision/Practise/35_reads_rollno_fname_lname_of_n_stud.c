//? WAP that reads roll number, first name, last name of n students and print the same record in ascending order on the basis of roll number using structure.

#include <stdio.h>

struct student
{
    int roll_no;
    char fname[20];
    char lname[20];
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n], temp;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the roll number of student-%d: ", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter the first name of student-%d: ", i + 1);
        scanf("%s", s[i].fname);
        printf("Enter the last name of student-%d: ", i + 1);
        scanf("%s", s[i].lname);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].roll_no > s[j].roll_no)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Details of students in ascending order of roll number:\n");
    printf("Roll No\tFirst Name\tLast Name\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\n", s[i].roll_no, s[i].fname, s[i].lname);
    }

    return 0;
}