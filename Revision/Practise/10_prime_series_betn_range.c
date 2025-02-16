//? WAP to print prime numbers between certain range of number. Take the initial and final value of range from user input.

#include <stdio.h>

int isPrime(int num)
{
    if (num < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void primeSeries(int a, int b)
{
    printf("Prime numbers between %d and %d: ", a, b);
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int a, b;

    do
    {
        printf("Enter the initial positive value: ");
        scanf("%d", &a);
    } while (a < 0);
    do
    {
        printf("Enter the final positive value: ");
        scanf("%d", &b);
    } while (b < 0);

    if (a > b)
    {
        printf("Swapping values because initial value is greater than final value.\n");
        int temp = a;
        a = b;
        b = temp;
    }

    primeSeries(a, b);

    return 0;
}
