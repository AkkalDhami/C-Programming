#include <stdio.h>

struct person
{
    int id, contact;
    float salary;
    char name[20], address[20];
};

int main()
{
    int i, n;
    printf("Enter no. of person that You want: ");
    scanf("%d", &n);
    struct person p[n];
    for (i = 0; i < n; i++)
    {
        printf("\nPerson %d Details\n", i + 1);
        printf("Enter Person-%d Id: ", i+1);
        scanf("%d", &p[i].id);

        printf("Enter Person-%d Name: ", i + 1);
        scanf("%s", p[i].name);

        printf("Enter Person-%d Address: ", i + 1);
        scanf("%s", p[i].address);

        printf("Enter Person-%d Salary: ", i + 1);
        scanf("%f", &p[i].salary);

        printf("Enter Person-%d Contact No: ", i + 1);
        scanf("%d", &p[i].contact);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n\n***Person %d Details***\n\n", i + 1);
        printf("Person ID: %d\n", p[i].id);
        printf("Person Name: %s\n", p[i].name);
        printf("Person Address: %s\n", p[i].address);
        printf("Person Salary: %.2f\n", p[i].salary);
        printf("Person Contact No : %d\n\n", p[i].contact);
    }

    return 0;
}