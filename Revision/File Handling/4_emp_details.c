#include <stdio.h>

struct emp_details
{
    int id, age;
    char name[50];
    float salary;
};

int main()
{
    int n, found = 0;
    FILE *file;

    file = fopen("employee.dat", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct emp_details e[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Employee-%d Details\n", i + 1);
        printf("Enter employee id: ");
        scanf("%d", &e[i].id);
        printf("Enter employee name: ");
        scanf("%s", e[i].name);
        printf("Enter employee age: ");
        scanf("%d", &e[i].age);
        printf("Enter employee salary: ");
        scanf("%f", &e[i].salary);

        fprintf(file, "%d %s %d %.2f\n", e[i].id, e[i].name, e[i].age, e[i].salary);
    }
    fclose(file);

    file = fopen("employee.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n\nEmployee Details with age greater than 35:\n");

    while (fscanf(file, "%d %s %d %f", &e[0].id, e[0].name, &e[0].age, &e[0].salary) != EOF)
    {
        if (e[0].age > 35)
        {
            found = 1;
            printf("Employee ID: %d\nEmployee Name: %s\nEmployee Age: %d\nEmployee Salary: %.2f\n\n",
                   e[0].id, e[0].name, e[0].age, e[0].salary);
        }
    }

    if (found == 0)
    {
        printf("No employee found with age greater than 35.\n");
    }

    fclose(file);
    printf("Program is executed by Akkal  Dhami");
    return 0;
}
