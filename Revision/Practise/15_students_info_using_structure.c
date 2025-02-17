//? WAP to input roll no, name, age, class, address, fee of n student and display the data.

#include <stdio.h>

struct student
{
    int roll, age, class, contact;
    char name[20], address[30];
    float fee;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of student-%d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);

        printf("Enter Contact No: ");
        scanf("%d", &s[i].contact);

        printf("Enter Class: ");
        scanf("%d", &s[i].class);

        printf("Enter Address: ");
        scanf("%s", s[i].address);

        printf("Enter Fee: ");
        scanf("%f", &s[i].fee);
    }

    printf("----------------------------------------------------------\n");
    printf("Roll\tName\tAge\tContact No\tClass\tAddress\tFee\n");
    printf("----------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].age, s[i].contact, s[i].class, s[i].address, s[i].fee);
        printf("----------------------------------------------------------\n");
    }

    return 0;
}