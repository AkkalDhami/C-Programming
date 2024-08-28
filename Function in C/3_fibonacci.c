#include <stdio.h>

int fibo(int);
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nFibonacci Series up to %d terms:\n", n);
    fibo(n);
    return 0;
}

int fibo(int n)
{
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("%d\t%d\t", fib[0], fib[1]); // Print the first two Fibonacci numbers

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
}