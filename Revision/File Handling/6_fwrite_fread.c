#include <stdio.h>
struct emp_details
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    FILE *file;

    file = fopen("employee.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct emp_details e[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Employee-%d Details\n", i + 1);
        printf("\nEnter employee id: ");
        scanf("%d", &e[i].id);
        printf("Enter employee name: ");
        scanf("%s", e[i].name);

        printf("Enter employee salary: ");
        scanf("%f", &e[i].salary);
    }
    fwrite(e, sizeof(struct emp_details), n, file);
    fclose(file);

    file = fopen("employee.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(e, sizeof(struct emp_details), n, file);
    for (int i = 0; i < n; i++)
    {

        printf("Employee ID: %d\nEmployee Name: %s\nEmployee Salary: %.2f\n\n",
               e[i].id, e[i].name, e[i].salary);
    }

    fclose(file);
    printf("Program is executed By Akkal Dhami\n");

    return 0;
}