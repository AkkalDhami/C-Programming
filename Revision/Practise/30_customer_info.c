#include <stdio.h>
#include <string.h>
// Write a C program that reads  cust_id (customer id), name, address and contact number of n different customers and display them in the proper format only for those who are either from KATHMANDU  or LALITPUR.

struct customer
{
    int contact, cust_id;
    char name[30], address[50];
};

int main()
{

    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    struct customer c[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of customer-%d\n", i + 1);
        printf("Enter customer id: ");
        scanf("%d", &c[i].cust_id);

        printf("Enter name: ");
        scanf("%s", c[i].name);

        printf("Enter address: ");
        scanf("%s", c[i].address);

        printf("Enter contact number: ");
        scanf("%d", &c[i].contact);
    }

    printf("\nCustomers from Kathmandu or Lalitpur:\n");
    for (int i = 0; i < n; i++)
    {
        strlwr(c[i].address);
        if(strcmp(c[i].address, "kathmandu") == 0 || strcmp(c[i].address, "lalitpur") == 0)
        {
            printf("Details of customer-%d:\n", i + 1);
            printf("Customer ID: %d\n", c[i].cust_id);
            printf("Name: %s\n", c[i].name);
            printf("Address: %s\n", c[i].address);
            printf("Contact Number: %d\n", c[i].contact);
            printf("\n");
        }
    }

    return 0;
}