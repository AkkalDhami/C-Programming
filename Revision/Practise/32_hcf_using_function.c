//? WAP to find the HCF of two numbers using user defined function.

#include <stdio.h>

int hcf(int a, int b)
{
    int h;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            h = i;
        }
    }
    return h;
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The HCF of %d and %d is %d", a, b, hcf(a, b));
    return 0;
}