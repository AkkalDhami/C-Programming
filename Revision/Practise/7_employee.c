//? WAP to input staff id, name and salary of n staff and store the data in a file and display the those staff details whose salary is betweeen 40,000 to 1,00,000 in accending order(By Salary).

#include <stdio.h>

struct staff
{
    int id;
    char name[30];
    float SALARY;
};

int main()
{
    int n;
    printf("Enter the no of staff: ");
    scanf("%d", &n);

    struct staff s[n], temp;
    FILE *fptr;
    fptr = fopen("staff.dat", "w");
    if (fptr == NULL)
    {
        printf("Error in Writing File!!!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of staff-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Id No: ");
        scanf("%d", &s[i].id);
        printf("Enter SALARY: ");
        scanf("%f", &s[i].SALARY);
        fprintf(fptr, "%s %d %.2f\n", s[i].name, s[i].id, s[i].SALARY);
    }
    fclose(fptr);
    printf("Store Staff Data Successfully!!\n");

    fptr = fopen("staff.dat", "r");
    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fscanf(fptr, " %s %d %f", s[i].name, &s[i].id, &s[i].SALARY);
    }

    fclose(fptr);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].SALARY > s[j].SALARY)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStaffs Data whose SALARY is between 40,000 to 1,00,000 in accending order(By SALARY):\n");

    for (int i = 0; i < n; i++)
    {
        if (s[i].SALARY >= 40000 && s[i].SALARY <= 100000)
        {
            printf("\nName: %s\nId No: %d\nSALARY: %.2f\n", s[i].name, s[i].id, s[i].SALARY);
        }
    }
    printf("Display Staffs Data Successfully!!\n");

    return 0;
}