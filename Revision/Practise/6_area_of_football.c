#include <stdio.h>

int area_of_football(int *r)
{
    return (4 / 3 * 3.14 * (*r) * (*r) * (*r));
}
int main()
{
    int r;

    printf("Enter the Radius of the Football: ");
    scanf("%d", &r);

    int result = area_of_football(&r);

    printf("Area of the Football = %d sq unit.\n", result);

    return 0;
}