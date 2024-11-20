
#include <stdio.h>

struct employee
{
    int id;
    float salary;
    char name[20];
};

int main()
{
    int i, n;
    float maxSalary;
    int maxIn = 0;

    printf("Enter number of employees you want: ");
    scanf("%d", &n);
    struct employee p[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d Details\n", i + 1);

        printf("Enter Employee-%d Name: ", i + 1);
        scanf("%19s", p[i].name);

        printf("Enter Employee-%d Id: ", i + 1);
        scanf("%d", &p[i].id);

        printf("Enter Employee-%d Salary: ", i + 1);
        scanf("%f", &p[i].salary);
    }

    maxSalary = p[0].salary;

    for (i = 1; i < n; i++)
    {
        if (p[i].salary > maxSalary)
        {
            maxSalary = p[i].salary;
            maxIn = i;
        }
    }

    printf("\nEmployee with Maximum Salary:\n");
    printf("Name: %s\n", p[maxIn].name);
    printf("Id: %d\n", p[maxIn].id);
    printf("Salary: %.2f\n", p[maxIn].salary);
    printf("\nProgram Executed By Akkal Dhami..\n\n");

    return 0;
}
