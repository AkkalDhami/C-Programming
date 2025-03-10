//? WAP to check the positive number input by user is prime or not using function isPrime();

#include <stdio.h>
#include <math.h>

int isPrime(int n);
int main()
{

    int n;

    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while (n <= 0);

    if (isPrime(n))
    {
        printf("%d is prime number\n", n);
    }
    else
    {
        printf("%d is not prime number\n", n);
    }

    return 0;
}
int isPrime(int n)
{
    if (n < 2)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}