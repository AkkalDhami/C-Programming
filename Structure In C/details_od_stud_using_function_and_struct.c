#include <stdio.h>

struct student {
    int rollNo;
    char name[50];
    float marks;
};

struct student inputStudentDetails() {
    struct student s;

    printf("\nEnter Student Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);  

    printf("Enter Student Marks: ");
    scanf("%f", &s.marks);

    return s; 
}

void displayStudentDetails(struct student s) {
    printf("\nStudent Roll Number: %d\n", s.rollNo);
    printf("Student Name: %s\n", s.name);
    printf("Student Marks: %.2f\n", s.marks);
}

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        students[i] = inputStudentDetails(); 
    }

    printf("\nDisplaying Student Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nDetails of student %d\n", i + 1);
        displayStudentDetails(students[i]); 
    }

    return 0;
}
