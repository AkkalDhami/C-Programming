#include <stdio.h>

int printSeries(int n)
{
    int i;
    for (i = 3; i <= n; i++)
    {
        if (i % 3 == 0)
        {

            printf("%d ", i);
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printSeries(n);
    return 0;
}