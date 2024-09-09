#include <stdio.h>
#include <string.h>

struct student
{
    int roll, contact, class;
    char name[20], address[20];
};

int main()
{
    int i, j, n;
    struct student temp;

    printf("Enter no. of student that you want: ");
    scanf("%d", &n);
    struct student p[n];

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d Details\n", i + 1);

        printf("Enter Student-%d Name: ", i + 1);
        scanf("%s", p[i].name);

        printf("Enter Student-%d Roll no: ", i + 1);
        scanf("%d", &p[i].roll);

        printf("Enter Student-%d Address: ", i + 1);
        scanf("%s", p[i].address);

        printf("Enter Student-%d Class: ", i + 1);
        scanf("%d", &p[i].class);

        printf("Enter Student-%d Contact No: ", i + 1);
        scanf("%d", &p[i].contact);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(p[i].name, p[j].name) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nDetails of students in ascending order of names:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d Details\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Roll No: %d\n", p[i].roll);
        printf("Address: %s\n", p[i].address);
        printf("Salary: %d\n", p[i].class);
        printf("Contact: %d\n", p[i].contact);
    }

    return 0;
}
