#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d is Positive Number\n", n);
        // if (n % 2 == 0)
        // {
        //     printf("%d is Even number\n", n);
        // }
        // else
        //     printf("%d is Odd number\n", n);
    }
    else if (n < 0)
    {
        printf("%d is Negative Number\n", n);
        // if (n % 2 == 0)
        // {
        //     printf("%d is Even number\n", n);
        // }
        // else
        //     printf("%d is Odd number\n", n);
    }
    else
        printf(" Zero\n");


    return 0;
}