//? WAP to open a new file and read rollno, name, address and phone number of students until the user says “no”, after reading the data, write it to the file and display the content of the file.

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno, phone;
    char name[50], address[100];
};

int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    if (fptr == NULL)
    {
        printf("Error in Writing File!!!\n");
        return 1;
    }

    char choice[20];
    struct student s;
    do
    {
        printf("\nEnter Student Name: ");
        scanf("%s", s.name);

        printf("Enter Student Roll Number: ");
        scanf("%d", &s.rollno);

        printf("Enter Student Address: ");
        scanf("%s", s.address);

        printf("Enter Student Phone Number: ");
        scanf("%d", &s.phone);

        fprintf(fptr, "%d %s %s %d\n", s.rollno, s.name, s.address, s.phone);

        printf("\nDo you want to add new student record (Y/N)? ");
        scanf("%s", choice);

    } while (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0);

    fclose(fptr);

    fptr = fopen("student.txt", "r");
    
    if (fptr == NULL)
    {
        printf("Error in Reading File!!!\n");
        return 1;
    }

    while (fscanf(fptr, "%d %s %s %d", &s.rollno, s.name, s.address, &s.phone) != EOF)
    {
        printf("\n\nRoll No: %d\nName: %s\nAddress: %s\nPhone Number: %d\n", s.rollno, s.name, s.address, s.phone);
    }

    return 0;
}