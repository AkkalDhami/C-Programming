#include<stdio.h>

int main()
{
    int i, factorial = 1, sum = 0;
     for (i = 1; i <= 4; i++)
    {
        factorial = factorial * i;
        sum = sum + factorial / i;
    }
    printf("\nsum of the series = %d \n", sum);
    // printf("factorial = %d ", factorial);
    return 0;
}