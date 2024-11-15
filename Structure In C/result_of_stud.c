#include <stdio.h>
#include <string.h>

typedef struct result_of_student
{
    float marks;
    char name[20];
} stud;

int main()
{
    int n;
    printf("Enter no. of Student that You want: ");
    int count1 = 0, count2 = 0;
    scanf("%d", &n);
    stud r[n];

    printf("\nPass Mark: 35.00\nFull marks: 100.00\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter The Details Of Student-%d\n", i + 1);
        printf("Enter The Name Of Student-%d : ", i + 1);
        scanf("%s", r[i].name);

        printf("Enter The Marks Of %s : ", r[i].name);
        scanf("%f", &r[i].marks);
    }

    printf("============================================");
    printf("\nName\t\tMarks\t\tPosition\n");
    printf("============================================");
    for (int i = 0; i < n; i++)
    {
        printf("\n%s\t\t%.2f\t\t%d\n", r[i].name, r[i].marks, i + 1);
        printf("============================================");
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i].marks >= 35)
        {
            printf("\n\nName Of Student-%d : %s", i + 1, r[i].name);
            printf("\nMarks Of Student-%d : %f", i + 1, r[i].marks);
            printf("\nCongratulations!!, You are Passed.");
            count1++;
        }
        else
        {
            printf("\n\nName Of Student-%d : %s", i + 1, r[i].name);
            printf("\nMarks Of %s : %.2f", r[i].name, r[i].marks);
            printf("\nTry Again!!, You are Failed.");
            printf("\nMarks Need Passing for %s : %.2f", r[i].name, (35.00 - r[i].marks));
            count2++;
        }
    }

    printf("\n\nNo. Of Passed Students : %d", count1);
    printf("\nNo. Of Failed Students : %d\n", count2);

    return 0;
}