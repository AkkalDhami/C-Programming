//To find the Area of Rectangle.
#include<stdio.h>
int main()
{
	float A, L, B;
	printf("Enter the Length of Rectangle:");
	scanf("%f",&L);
	
	printf("Enter the Breadth of Rectangle:");
	scanf("%f",&B);
	
	// printf("Enter the Area of Rectangle:");
	// scanf("%f",&A);
	
	if(L==0){
		printf("Length of Rectangle= %.3f\n", A/B);
	}
	else if(B==0){
		printf("Breadth of Rectangle = %.3f\n", A/L);
	}
	else
	printf("Area of Rectangle = %.3f\n", L*B);

   return 0;
}