#include <stdio.h>

int findEvenOrOdd();
int findEvenOrOdd()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even.", num);
    else
    {
        printf("%d is odd.", num);
    }
}

int main()
{
    findEvenOrOdd();
    return 0;
}