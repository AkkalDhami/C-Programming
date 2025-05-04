
#include <stdio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    int n;
    printf("Enter a no. of employees: ");
    scanf("%d", &n);

    struct employee e[n], temp;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Employee-%d Id: ", i + 1);
        scanf("%d", &e[i].id);

        printf("Enter Employee-%d Name: ", i + 1);
        scanf("%s", e[i].name);

        printf("Enter Employee-%d Salary: ", i + 1);
        scanf("%f", &e[i].salary);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (e[i].id > e[j].id)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\nStudent Details sort by ascending order by id\n");
    printf("\nId\tName\tSalary\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}