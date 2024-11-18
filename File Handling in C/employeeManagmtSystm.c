#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int checkEmployeeId(int id)
{
    FILE *file = fopen("employees.txt", "r");
    if (file == NULL)
    {
        return 0; // File does not exist, so ID cannot be in use
    }

    struct Employee emp;
    while (fscanf(file, "%d %49s %f", &emp.id, emp.name, &emp.salary) == 3)
    {
        if (emp.id == id)
        {
            fclose(file);
            return 1; // ID is already in use
        }
    }

    fclose(file);
    return 0; // ID is unique
}

void addEmployee()
{
    FILE *file = fopen("employees.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    // Check if the ID already exists
    while (checkEmployeeId(emp.id))
    {
        printf("Employee ID %d is already in use. Please enter a different ID: ", emp.id);
        scanf("%d", &emp.id);
    }

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fprintf(file, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
    printf("Employee added successfully!\n");

    fclose(file);
}

void viewEmployees()
{
    FILE *file = fopen("employees.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file or no records found.\n");
        return;
    }

    struct Employee emp;
    printf("\nID\tName\t\tSalary\n");
    printf("---------------------------------\n");

    while (fscanf(file, "%d %49s %f", &emp.id, emp.name, &emp.salary) == 3)
    {
        printf("%d\t%-15s%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
}

void searchEmployee()
{
    FILE *file = fopen("employees.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file or no records found.\n");
        return;
    }

    int searchId;
    struct Employee emp;
    int found = 0;

    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);

    while (fscanf(file, "%d %49s %f", &emp.id, emp.name, &emp.salary) == 3)
    {
        if (emp.id == searchId)
        {
            printf("Employee found: ID=%d, Name=%s, Salary=%.2f\n", emp.id, emp.name, emp.salary);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Employee with ID %d not found.\n", searchId);
    }

    fclose(file);
}

void updateEmployee()
{
    FILE *file = fopen("employees.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (file == NULL || tempFile == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    int updateId;
    struct Employee emp;
    int found = 0;

    printf("Enter Employee ID to update: ");
    scanf("%d", &updateId);

    while (fscanf(file, "%d %49s %f", &emp.id, emp.name, &emp.salary) == 3)
    {
        if (emp.id == updateId)
        {
            printf("Enter new Name: ");
            scanf("%s", emp.name);
            printf("Enter new Salary: ");
            scanf("%f", &emp.salary);
            found = 1;
        }
        fprintf(tempFile, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
    fclose(tempFile);

    remove("employees.txt");
    rename("temp.txt", "employees.txt");

    if (found)
    {
        printf("Employee details updated successfully.\n");
    }
    else
    {
        printf("Employee with ID %d not found.\n", updateId);
    }
}

void deleteEmployee()
{
    FILE *file = fopen("employees.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (file == NULL || tempFile == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    int deleteId;
    struct Employee emp;
    int found = 0;

    printf("Enter Employee ID to delete: ");
    scanf("%d", &deleteId);

    while (fscanf(file, "%d %49s %f", &emp.id, emp.name, &emp.salary) == 3)
    {
        if (emp.id != deleteId)
        {
            fprintf(tempFile, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
        }
        else
        {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("employees.txt");
    rename("temp.txt", "employees.txt");

    if (found)
    {
        printf("Employee with ID %d deleted successfully.\n", deleteId);
    }
    else
    {
        printf("Employee with ID %d not found.\n", deleteId);
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            viewEmployees();
            break;
        case 3:
            searchEmployee();
            break;
        case 4:
            updateEmployee();
            break;
        case 5:
            deleteEmployee();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
