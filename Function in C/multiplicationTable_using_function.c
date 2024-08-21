#include <stdio.h>


int multiply(int a, int b);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {

        printf("%d * %d = %d\n", num, i, multiply(num, i));
    }

    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}
