#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 10, b = 20;
    printf("Before swapping:\na = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping:\na = %d, b = %d\n", a, b);

    return 0;
}