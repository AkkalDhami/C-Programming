//? WAP to read the account no, name and balance of 'n' number of customers and display the account no, name and balance of those customers whose balance is greater than 5000 and save the data in a file.

#include <stdio.h>
struct customer
{
    int acc_no;
    char name[30];
    float balance;
};

int main()
{

    int n;
    FILE *fptr;
    fptr = fopen("customer.dat", "w");
    if (fptr == NULL)
    {
        printf("Error in Writing File!!!\n");
        return 1;
    }
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    struct customer c[n];

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of customer-%d\n", i + 1);
        printf("Enter account no: ");
        scanf("%d", &c[i].acc_no);
        printf("Enter name: ");
        scanf("%s", c[i].name);
        printf("Enter balance: ");
        scanf("%f", &c[i].balance);
        fprintf(fptr, "%d %s %.2f\n", c[i].acc_no, c[i].name, c[i].balance);
    }
    fclose(fptr);

    fptr = fopen("customer.dat", "r");
    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    printf("\nCustomers with balance greater than 5000:\n");

    while (fscanf(fptr, "%d %s %f", &c[0].acc_no, c[0].name, &c[0].balance) != EOF)
    {
        if (c[0].balance > 5000)
        {
            printf("Account No: %d\n", c[0].acc_no);
            printf("Name: %s\n", c[0].name);
            printf("Balance: %.2f\n", c[0].balance);
            printf("\n");
            found = 1;
        }
    }

    if (!found)
    {
        printf("No customer found with balance greater than 5000.\n");
    }

    return 0;
}
