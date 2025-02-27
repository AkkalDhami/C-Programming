//? Demonstrate a program in C to create and store Reg_no, name, gender and address of students to a data file named “SCORE.DAT”. The program should prompt the user whether to continue or not. When finished, the program should also display all the records in the proper format.

#include <stdio.h>
#include <string.h>

struct students
{
    int Reg_no;
    char name[40], gender[20], address[50];
};

int main()
{

    char choice[50];
    FILE *fptr;
    fptr = fopen("SCORE.DAT", "w");
    if (fptr == NULL)
    {
        printf("Error in Writing File!!!\n");
        return 1;
    }

    struct students s;

    printf("Enter the following details of student\n");
    do
    {
        printf("Enter Name: ");
        scanf("%s", s.name);

        printf("Enter Reg no: ");
        scanf("%d", &s.Reg_no);

        printf("Enter Gender: ");
        scanf("%s", s.gender);

        printf("Enter Address: ");
        scanf("%s", s.address);

        fprintf(fptr, "%s %d %s %s\n", s.name, s.Reg_no, s.gender, s.address);
        printf("\nDo you want to add new student record (Y/N)? ");
        scanf("%s", choice);
    } while (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0);

    fclose(fptr);

    fptr = fopen("SCORE.DAT", "r");
    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    printf("Name\tReg No\tGender\tAddress\n");
    while (fscanf(fptr, "%s %d %s %s", s.name, &s.Reg_no, s.gender, s.address) != EOF)
    {
        printf("%s\t%d\t%s\t%s\n", s.name, s.Reg_no, s.gender, s.address);
    }

    return 0;
}