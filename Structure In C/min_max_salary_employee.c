#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    float salary;
    char name[20];
    char post[20];
};

int main()
{
    int i, n;
    float maxSalary, minSalary;
    int maxIn = 0, minIn = 0;

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

        printf("Enter Employee-%d Post: ", i + 1);
        scanf("%19s", p[i].post);

        printf("Enter Employee-%d Salary: ", i + 1);
        scanf("%f", &p[i].salary);
    }

    maxSalary = p[0].salary;
    minSalary = p[0].salary;

    for (i = 1; i < n; i++)
    {
        if (p[i].salary > maxSalary)
        {
            maxSalary = p[i].salary;
            maxIn = i;
        }
        if (p[i].salary < minSalary)
        {
            minSalary = p[i].salary;
            minIn = i;
        }
    }

    printf("\nEmployee with Maximum Salary:\n");
    printf("Name: %s\n", p[maxIn].name);
    printf("Id: %d\n", p[maxIn].id);
    printf("Post: %s\n", p[maxIn].post);
    printf("Salary: %.2f\n", p[maxIn].salary);

    printf("\nEmployee with Minimum Salary:\n");
    printf("Name: %s\n", p[minIn].name);
    printf("Id: %d\n", p[minIn].id);
    printf("Post: %s\n", p[minIn].post);
    printf("Salary: %.2f\n", p[minIn].salary);

    return 0;
}
