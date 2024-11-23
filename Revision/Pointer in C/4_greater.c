#include <stdio.h>

void FindGreater(int *a, int *b)
{
    if (*a > *b)
    {
        printf("%d is greater number.", *a);
    }
    else
    {
        printf("%d is greater number.", *b);
    }
}

int main()
{
    int a, b;
    printf("\nEnter the first no: ");
    scanf("%d", &a);
    printf("\nEnter the second no: ");
    scanf("%d", &b);

    FindGreater(&a, &b);
    printf("\nProgram Executed By Akkal Dhami</>\n\n");

    return 0;
}