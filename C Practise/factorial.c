#include <stdio.h>

int main()
{
    int n, factorial = 1, i, sum = 0 ;
    // printf("Enter the Number: ");
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     factorial *= i;
    // }
    // printf("Factorial of %d = %d ",n,  factorial);
    

    for (i = 1; i <= 4; i++)
    {
        factorial = factorial * i;
        sum = sum + factorial / i;
    }
    printf("\nsum of the series = %d \n", sum);
    // printf("factorial = %d ", factorial);
    // printf("The Codes Executed By Akkal Dhami \n\n");
    printf("The Codes Executed By Rajan Chhatyal \n\n");

    return 0;
}