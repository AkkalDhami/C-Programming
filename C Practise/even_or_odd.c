#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter a number:");
    // scanf("%d", &n);

    // n  % 2 ==  0 ? printf("The number is even\n") : printf("The number is odd\n");

    // if (n % 2 == 0)
    // {
    //     printf("%d is even number", n);
    // }

    // else
    //     printf("%d is odd number", n);

    int n, fact = 1;
    for(int i =1; i=4; i++){
        fact = fact * i/n;
        printf("Factorial = %d", fact);
    }

    return 0;
}