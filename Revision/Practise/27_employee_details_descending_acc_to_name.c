//? WAP to input name and address of N employees and sort them in descending alphabetic order according to their name.

#include <stdio.h>
#include <string.h>

struct employee
{
    char name[30];
    char address[50];
};

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee e[n], temp;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of employee-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Address: ");
        scanf("%s", e[i].address);
    }

    printf("\nEmployees in decending order of name:\n");
    printf("\nName\tAddress\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(e[i].name, e[j].name) < 0)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
        printf("%s\t%s\n", e[i].name, e[i].address);
    }

    return 0;
}
