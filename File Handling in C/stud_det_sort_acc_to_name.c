#include <stdio.h>
#include <string.h>
struct student_info
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    FILE *file;
    struct student_info s[10], temp;
    int n = 0;
    file = fopen("student_info.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    while (fscanf(file, "%s %d %d", s[n].name, &s[n].roll, &s[n].marks) != EOF && n < 10)
    {
        n++;
    }
    fclose(file);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Total Students : %d\n", n);
    printf("\nS.N \tName \tRoll \tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t%s \t%d \t%d\n", i + 1, s[i].name, s[i].roll, s[i].marks);
    }
    printf("Program Executed By Akkal Dhami\n");
    return 0;
}
