#include <stdio.h>
int isPrime(int);
int isPrime(int n)
{
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
        }
    }
    if (prime)
    {
        printf("%d is not a Prime Number\n", n);
    }
    else
    {
        printf("%d is Prime Number\n", n);
    }
}

int userInput()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    isPrime(n);
}
int main()
{
    userInput();
    return 0;
}
