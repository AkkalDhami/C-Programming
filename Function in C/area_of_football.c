#include <stdio.h>
#include <math.h>
float findArea(float r)
{
    float area = 4 * 3.14 * pow(r, 2);
    return area;
}
int main()
{
    float radius;
    printf("\nEnter the radius of the Football: ");
    scanf("%f", &radius);

    printf("Area of The Football With Radius %.2f: %.2f\n", radius, findArea(radius));

    return 0;
}