//?	Write a program to create a text file named info.txt to store student’s information such as regno, name, and gender and display the data also. The program should prompt a user to continue adding new records of employees or not.

#include <stdio.h>
#include <string.h>

struct student
{
    int regno;
    char name[50], gender[50];
};

int main()
{

    char choice[20];
    FILE *fptr;
    fptr = fopen("info.txt", "w");
    if (fptr == NULL)
    {
        printf("Error in Writing File!!!\n");
        return 1;
    }

    struct student s;
    do
    {
        printf("\nEnter Student Name: ");
        scanf("%s", s.name);
        printf("Enter Student Reg no: ");
        scanf("%d", &s.regno);
        printf("Enter Student Gender: ");
        scanf("%s", s.gender);
        fprintf(fptr, "%s\t%d\t%s\n", s.name, s.regno, s.gender);

        printf("\nDo you want to add new student record (Y/N)? ");
        scanf("%s", choice);
    } while (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0);

    fclose(fptr);

    fptr = fopen("info.txt", "r");
    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    while (fscanf(fptr, "%s\t%d\t%s", s.name, &s.regno, s.gender) != EOF)
    {
        printf("\nName: %s", s.name);
        printf("\nReg NO: %d", s.regno);
        printf("\nGender: %s\n", s.gender);
    }

    fclose(fptr);
    return 0;
}