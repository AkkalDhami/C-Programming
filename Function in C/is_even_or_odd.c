#include <stdio.h>

int findEvenOrOdd(int x);
int findEvenOrOdd(int x)
{
    return (x % 2 == 0 ? printf("%d Is Even Number.", x) : printf("%d Is Odd Number.", x));
}

int userInput(int y)
{
    printf("Enter a number: ");
    scanf("%d", &y);
    return y;
}
int main()
{
    int a;
    findEvenOrOdd(userInput(a));
    return 0;
}