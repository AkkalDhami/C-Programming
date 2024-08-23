#include <stdio.h>

int sumOfNno()
{
    int x;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d\n", x, sum);
}
int main()
{
    sumOfNno();

    return 0;
}