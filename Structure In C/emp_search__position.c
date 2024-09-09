#include <stdio.h>
#include <string.h>

 struct employee {
    float salary;
    char name[20];
    char post[20];
};


int main() {
    int i, n;
    char searchName[20];

    printf("Enter number of employees you want : ");
    scanf("%d", &n);
    struct employee p[n];

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d Details\n", i + 1);

        printf("Enter Employee-%d Name: ", i + 1);
        scanf("%s", p[i].name);

        printf("Enter Employee-%d Post: ", i + 1);
        scanf("%s", p[i].post);

        printf("Enter Employee-%d Salary: ", i + 1);
        scanf("%f", &p[i].salary);
    }

    printf("\nEnter the name of the employee \nwhose details you want to search: ");
    scanf("%s", searchName);

    int found = 0; 
    for (i = 0; i < n; i++) {
        if (strcmp(p[i].name, searchName) == 0) {
            printf("Employee Post : %s\n", p[i].post);
            printf("Employee Salary: %.2f\n", p[i].salary);
            printf("Position of the Employee : %d", i+1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with name '%s' not found.\n", searchName);
    }

    return 0;
}