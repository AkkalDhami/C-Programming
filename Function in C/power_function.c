#include <stdio.h>

int power(int x, int y)
{
    int p = 1;
    for (int i = 0; i < y; i++)
    {
        p = p * x;
    }
    return p;
}

int main()
{
    int x, y;
    printf("\nEnter No-1: ");
    scanf("%d", &x);
    printf("Enter No-2: ");
    scanf("%d", &y);
    printf("\n%d Is To The Power Of %d : %d\n", x, y, power(x, y));
    return 0;
}