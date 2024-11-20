#include <stdio.h>
struct employee
{
    int empid;
    char name[50];
    float salary;
};

int main()
{
    int i, j;
    struct employee s[3];
    struct employee temp;
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter Employee-%d Name: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter Employee-%d Id: ", i + 1);
        scanf("%d", &s[i].empid);

        printf("Enter Employee-%d Salary: ", i + 1);
        scanf("%f", &s[i].salary);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (s[i].salary < s[j].salary)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nEmployee Salary in descending order:\n");
    printf("Name\t\tID\t\tSalary\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\t\t%d\t\t%.2f\n", s[i].name, s[i].empid, s[i].salary);
    }
    printf("\nProgram Executed By Akkal Dhami..\n\n");
    return 0;
}