#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int i, n;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("\nFibonacci series up to %dth term:\n", n);
    for (i = 0; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
