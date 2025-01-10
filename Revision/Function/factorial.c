#include <stdio.h>
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    printf("Factorial of %d : %d\n", n, f);
}
int main()
{
    int n;
top:
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        goto top; 
    }
    factorial(n);
    printf("Program Executed By Akkal Dhami\n");
    return 0;
}
