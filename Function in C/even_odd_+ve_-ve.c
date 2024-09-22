#include <stdio.h>

void printResult(int n)
{
    (n % 2 == 0) ? printf("%d is Even Number.\n", n) : printf("%d is Odd Number.\n", n);
}
void findEvenOddPosiNegative(int n)
{
    if (n > 0)
    {
        printf("%d is Positive Number.\n", n);
        printResult(n);
    }
    else if (n < 0)
    {
        printf("%d is Negative Number.\n", n);
        printResult(n);
    }
    else
    {
        printf("The Number is Zero.\n");
    }
}
int main()
{

    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    findEvenOddPosiNegative(n);
    return 0;
}