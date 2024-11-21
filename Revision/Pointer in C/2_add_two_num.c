#include <stdio.h>
//? Add two number using pointer
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

    printf("Sum of %d and %d is: %d\n",a, b, sum(&a, &b));
    printf("\nProgram Executed By Akkal Dhami</>\n\n");
    return 0;
}