#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your Marks:");
    scanf("%f", &marks);

    if (marks > 90 && marks < 100)
    {
        printf("Grade = A+");
    }
    else if (marks <= 90 && marks > 80)
    {
        printf("Grade = A");
    }
    else if (marks <= 80 && marks > 70)
    {
        printf("Grade = B+");
    }
    else if (marks <= 70 && marks > 60)
    {
        printf("Grade = B");
    }
    else if (marks <= 60 && marks > 50)
    {
        printf("Grade = C+");
    }
    else if (marks <= 50 && marks > 40)
    {
        printf("Grade = C");
    }
    else if (marks < 40)
    {
        printf("Grade = NG");
    }
    else
        printf("Wrong Marks!");

    return 0;
}
