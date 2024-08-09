// TO find the area of circle.

#include <stdio.h>
int main()
{
	float r, Area, Volume, pie = 3.14;

	printf("Enter the Radius of the Circle: ");
	scanf("%f", &r);
	Area = pie * r * r;
	Volume = (4 / 3) * pie * r * r * r;
	printf("Area of the Circle = %.2f\n", Area);
	printf("Volume of the Circle = %.2f\n", Volume);
	return 0;
}