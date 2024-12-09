#include <stdio.h>
#include <math.h>

float findVolume(float R, float r)
{
    return (4 / 3 * 3.14 * (pow(R, 3) - pow(r, 3)));
}
int main()
{
    float R, r;
    printf("Enter ther value of R: ");
    scanf("%f", &R);
    printf("Enter ther value of r: ");
    scanf("%f", &r);
    
    printf("Volume of Hollow Sphere : %.2f", findVolume(R, r));
    return 0;
}
