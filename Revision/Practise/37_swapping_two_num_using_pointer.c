//? WAP Swapping two numbers using pointer.

#include <stdio.h>

int swapp(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int num1, num2;
    printf("Enter a first number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);

    printf("\nBefore Swap\nnum1: %d, num2: %d", num1, num2);
    swapp(&num1, &num2);
    printf("\nAfter Swap\nnum1: %d, num2: %d", num1, num2);

    return 0;
}