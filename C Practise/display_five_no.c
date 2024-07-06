#include <stdio.h>

int main()
{
    // int a[5];
    // int i;
    // for (i = 0; i < 5; i++)
    // {
    // printf("Enter the 5 elements of array\n");
    //     scanf("%d", &a[i]);
    // }
    // printf("The elements of array are\n");
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d\n", a[i]);
    // }
    int i, n;
    printf("\nEnter the number: ");
    scanf("%d", &n);

    printf("Multiplication of %d \n", n);
    for ( i = 1; i <=10; i++)
    {
       printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}