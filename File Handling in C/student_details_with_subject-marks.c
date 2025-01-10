#include <stdio.h>
struct student_info
{
    char name[20];
    int roll;
    float eng, nep, comp, maths;
};

int main()
{
    FILE *file;
    int n;
    file = fopen("student_info.txt", "w");
    printf("Enter no of Students: ");
    scanf("%d", &n);
    struct student_info s[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Student-%d Roll No: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("\nEnter Student-%d Name: ", i + 1);
        scanf("%s", s[i].name);

        printf("\nEnter Student-%d Marks in English: ", i + 1);
        scanf("%f", &s[i].eng);

        printf("\nEnter Student-%d Marks in Nepali: ", i + 1);
        scanf("%f", &s[i].nep);

        printf("\nEnter Student-%d Marks in Computer: ", i + 1);
        scanf("%f", &s[i].comp);

        printf("\nEnter Student-%d Marks in Maths: ", i + 1);
        scanf("%f", &s[i].maths);
        fprintf(file, "%d %s %f %f %f %f\n", s[i].roll, s[i].name, s[i].eng, s[i].nep, s[i].comp, s[i].maths);
    }

    fclose(file);
    file = fopen("student_info.txt", "r");
    if (file == NULL)
    {
        perror("File Could not Open");
    }

    while (fscanf(file, "%d %s %f %f %f %f", &s[0].roll, s[0].name, &s[0].eng, &s[0].nep, &s[0].comp, &s[0].maths) != EOF)
    {
        printf("\nStudent Name: %s\nStudent Roll no: %d\nStudent Marks in English: %.2f\nStudent Marks in Nepali: %.2f\nStudent Marks in Maths: %.2f\nStudent Marks in Computer: %.2f\n", s[0].name, s[0].roll, s[0].eng, s[0].nep, s[0].maths, s[0].comp);
        printf("Total Marks : %.2f\n", (s[0].eng + s[0].nep + s[0].maths + s[0].comp));
    }
    fclose(file);
    printf("Program Executed By Akkal Dhami\n");
    return 0;
}
