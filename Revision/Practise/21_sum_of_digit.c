//?	Write a C program using a user-defined function named sumdigit() to calculate sum of digits of a positive integer input by a user. [hint: if input number is: 1234, the output should be: sum of digits=10]

#include <stdio.h>

int sumdigit(int n);

int main()
{
    int n;
    do
    {
        printf("Enter a digit: ");
        scanf("%d", &n);
        printf("Please enter a positive number!!\n");
    } while (n < 0);

    int result = sumdigit(n);

    printf("Sum of digit(%d) : %d\n", n, result);
    return 0;
}

int sumdigit(int n)
{
    int sum = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    return sum;
}