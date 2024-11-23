#include <stdio.h>

int sum(int *x, int *y)
{
    return *x + *y;
}

int main()
{
    int a, b;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Sum of a and b is: %d\n", sum(&a, &b));
    printf("\nProgram Executed By Akkal Dhami</>\n\n");
    return 0;
}