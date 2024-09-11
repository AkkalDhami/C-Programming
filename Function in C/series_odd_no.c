#include <stdio.h>

void printSeries(int n)
{
    int i;
    for (i = 3; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printSeries(n);
    return 0;
}
