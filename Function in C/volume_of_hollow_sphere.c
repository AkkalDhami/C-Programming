#include <stdio.h>
#include <math.h>

float findVolume(float R, float r, float h)
{
    return (3.14 * h * (pow(R, 2) - pow(r, 2)));
}
int main()
{
    float R, r, h;
    printf("Enter ther value of R: ");
    scanf("%f", &R);
    printf("Enter ther value of r: ");
    scanf("%f", &r);
    printf("Enter ther value of h: ");
    scanf("%f", &h);

    printf("Volume of Hollow Sphere : %.2f", findVolume(R, r, h));

    return 0;
}