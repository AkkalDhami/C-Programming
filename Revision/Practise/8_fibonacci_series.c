//? WAP to print fibonacci series of n terms using function.

#include <stdio.h>

void fibonacci(int n) 
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    do
    {
        printf("Enter the positive number of terms: ");
        scanf("%d", &n);
    } while (n < 0);

    fibonacci(n);

    return 0;
}
