// To find the simple interest
#include <stdio.h>
int main()
{
	float p, t, r;

	printf("Enter the Principal, Time and Rate:");
	scanf("%f %f %f", &p, &t, &r);

	printf("Simple Interest = %f", (p * t * r) / 100);

	return 0;
}
