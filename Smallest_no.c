#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter three Numbers:");
    scanf("%d%d%d", &n1, &n2, &n3);

     if (n1 < n2 && n1 < n3)
    {
        printf("%d is Smallest Number.", n1);
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("%d is Smallest Number.", n2);
    }
    else
    {
        printf("%d is Smallest Number.", n3);
    }

    return 0;
}