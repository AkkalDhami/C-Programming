#include <stdio.h>

//! WAP to enter and display the details of the student using nested structures.

struct studentData1
{
    int rollNo, class, contact;
};

struct studentData2
{
    char name[50];
    float marks;
    struct studentData1 s1;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct studentData2 s2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student-%d: ", i + 1);
        scanf("%s", s2[i].name);
        printf("Enter the roll number of student-%d: ", i + 1);
        scanf("%d", &s2[i].s1.rollNo);
        printf("Enter the class of student-%d: ", i + 1);
        scanf("%d", &s2[i].s1.class);
        printf("Enter the contact number of student-%d: ", i + 1);
        scanf("%d", &s2[i].s1.contact);
        printf("Enter the marks of student-%d: ", i + 1);
        scanf("%f", &s2[i].marks);
        printf("\n");
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", s2[i].name);
        printf("Roll Number: %d\n", s2[i].s1.rollNo);
        printf("Class: %d\n", s2[i].s1.class);
        printf("Contact Number: %d\n", s2[i].s1.contact);
        printf("Marks: %.2f\n", s2[i].marks);
        printf("\n");
    }
    printf("\nProgram Executed By Akkal Dhami</>\n\n");
    return 0;
}
