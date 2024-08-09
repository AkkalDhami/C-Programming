#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Multiplication table of %d :\n", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}