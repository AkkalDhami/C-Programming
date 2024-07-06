#include <stdio.h>
int main()
{
    int l, b;
    printf("Enter the Length of Perimeter:");
    scanf("%d", &l);

    printf("Enter the Breadth of Perimeter:");
    scanf("%d", &b);

    printf("Perimeter of the Rectangle = %d", 2 * (l + b));
    return 0;
}