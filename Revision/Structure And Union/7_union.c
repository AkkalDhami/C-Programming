#include <stdio.h>

union studentData1
{
    char name[50];
};

int main()
{

    union studentData1 s;
    printf("Enter Your Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Your Name is: %s", s.name);

    printf("\nProgram Executed By Akkal Dhami..\n\n");

    return 0;
}