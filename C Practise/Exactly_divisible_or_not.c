#include <stdio.h>
int main()
{
    // n1 is divisor, n is dividend
    int n, n1;
    printf("Enter Number:");
    scanf("%d", &n);
    printf("Enter Number that you divide:");
    scanf("%d", &n1);
    if (n % n1 == 0)
    {
        printf("%d is exactly divisible by %d\n", n,n1);
        printf("The divisible number is %d\n", n / n1);
        printf("The Remainder is %d\n",n%n1);
    }
    else
        {
            printf("%d is not exactly divisible by %d\n", n,n1);
            printf("The Remainder is %d",n%n1);
    }
    return 0;
}