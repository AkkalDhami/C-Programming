#include <stdio.h>
#include <string.h>

union studentData1
{
    int rollNo, class;
    char name[50];
    float marks;
};

int main()
{
    union studentData1 s2;
    s2.rollNo = 10;
    s2.class = 20;
    // s2.marks = 2;

    // strcpy(s2.name, "Aavash");

    printf("Roll No: %d\n", s2.rollNo);
    printf("Class: %d\n", s2.class);
    // printf("Class: %f\n", s2.marks);
    // printf("Name: %s\n", s2.name);

    return 0;
}