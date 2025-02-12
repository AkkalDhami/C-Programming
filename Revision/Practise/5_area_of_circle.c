#include <stdio.h>

float area_of_circle(float *r)
{
    return 3.14 * (*r) * (*r);
}
int main()
{
    float r;

    printf("Enter the Radius of the Circle: ");
    scanf("%f", &r);

    float result = area_of_circle(&r);

    printf("Area of the Circle = %.2f sq unit.\n", result);

    return 0;
}