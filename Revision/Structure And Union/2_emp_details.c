#include <stdio.h>
#include <string.h>

struct employee
{
    float salary;
    char name[20];
    int empid;
};
int main()
{
    int i, n;

    printf("Enter number of employees you want : ");
    scanf("%d", &n);
    struct employee p[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Employee %d Details\n", i + 1);

        printf("Enter Employee-%d Name: ", i + 1);
        scanf("%s", p[i].name);

        printf("Enter Employee-%d Id: ", i + 1);
        scanf("%d", &p[i].empid);

        printf("Enter Employee-%d Salary: ", i + 1);
        scanf("%f", &p[i].salary);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d Details", i + 1);
        printf("\nEmployee Name : %s\n", p[i].name);
        printf("Employee Id : %d\n", p[i].empid);
        printf("Employee Salary: %.2f\n", p[i].salary);
    }
    printf("\nProgram Executed By Akkal Dhami..\n\n");
    return 0;
}