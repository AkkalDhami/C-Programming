#include <stdio.h>
struct person
{
    int id, contact;
    float salary;
    char name[20], address[20];
};

int main()
{
    struct person p;
    // p.id = 1; // initialisiation of person id.
    printf("Enter Person Id: ");
    scanf("%d", &p.id);

    // strcpy(p.name, "John Doe");
    printf("Enter Person Name: ");
    scanf("%s", p.name);
    
    printf("Enter Person Address: ");
    scanf("%s", p.address);


    printf("Enter Person Salary: ");
    scanf("%f", &p.salary);

    printf("Enter Person Contact No: ");
    scanf("%d", &p.contact);

    printf("\n\"Details of Person\"\n");
    printf("Person Id : %d\n", p.id);
    printf("Person Name : %s\n", p.name);
    printf("Person Address : %s\n", p.address);
    printf("Person Salary : %.2f\n", p.salary);
    printf("Person Contact NO : %d\n", p.contact);


    return 0;
}
