//? WAP to print fibonacci series of n terms using recursive function.

#include <stdio.h>

void fibonacci(int n, int a, int b)
{
    if (n <= 0)
    {
        return;
    }

    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

int main()
{
    int n, a = 0, b = 1;
    do
    {
        printf("Enter the positive number of terms: ");
        scanf("%d", &n);
    } while (n < 0);

    fibonacci(n, a, b);
    return 0;
}
