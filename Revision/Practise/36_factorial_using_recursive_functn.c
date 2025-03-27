//? WAP to find the factorial of a number using recursive function.

#include <stdio.h>

int factorial(int n);
int main()
{
    int n;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while (n < 0);

    int result = factorial(n);
    printf("Factorial of %d : %d", n, result);

    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}