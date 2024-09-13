#include <stdio.h>
#include <string.h>

void printDetails()
{
    char name[20], address[20];
    int grade, roll;

    printf("\nEnter Your Name : ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Your Class : ");
    scanf("%d", &grade);

    printf("Enter Your Roll No : ");
    scanf("%d", &roll);

    printf("Enter Your Address : ");
    scanf("%s", address);

    printf("\nStudent Details");
    printf("\nName : %s", name);
    printf("Roll No : %d", roll);
    printf("\nClass : %d", grade);
    printf("\nAddress : %s", address);
}

int main()
{
    printDetails();
    return 0;
}