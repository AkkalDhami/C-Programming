//? WAP to find the HCF of two numbers using recursive function.

#include <stdio.h>

int hcf(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return hcf(b, a % b);
    }
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