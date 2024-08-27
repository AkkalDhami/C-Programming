#include <stdio.h>

void callByValue(int x, int y);
void callByReference(int *x, int *y);

void callByValue(int x, int y)
{
    printf("\nThe Value of First Number : %d\nThe Value of Second Number: %d\n", x, y);
}

void callByReference(int *x, int *y)
{
    int c = *x;
    *x = *y;
    *y = c;

    printf("\nThe Value of First Number : %d\nThe Value of Second Number: %d\n", *x, *y);
}

int main()
{
    int a, b;
    printf("\nEnter a First Number: ");
    scanf("%d", &a);
    printf("\nEnter a Second Number: ");
    scanf("%d", &b);

    printf("\nCall By Value");
    callByValue(a, b);

    printf("\nCall By Reference");
    callByReference(&a, &b); // Passing addresses of a and b

    return 0;
}
