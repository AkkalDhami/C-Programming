#include <stdio.h>

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int a = 10, b = 20;
    printf("Before swapping:\na = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping:\na = %d, b = %d\n", a, b);

    return 0;
}
