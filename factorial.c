#include <stdio.h>

int main()
{
    int n, factorial = 1, i, sum = 0 ;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d = %d ",n,  factorial);
    
    return 0;
}