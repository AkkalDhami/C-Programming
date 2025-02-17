//? WAP to find the sum of n natural numbers using recursive function.

#include <stdio.h>

int sumOfNno(int n)
{
    if (n == 0)
        return 0; // Base case

    return sumOfNno(n - 1) + n;
}

int main()
{
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Please enter a positive integer.\n");
        }
    } while (n < 0);

    int result = sumOfNno(n);

    printf("Sum of first %d natural numbers: %d", n, result);
    return 0;
}