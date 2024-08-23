#include <stdio.h>

float simpleInterest(float p, float t, float r);

float simpleInterest(float p, float t, float r){
    return (p * t * r) / 100;
}

int main()
{
    float principal, time, rate;
    printf("\nEnter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the time period: ");
    scanf("%f", &time);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Simple Interest: %.2f\n", simpleInterest(principal, time, rate));

    return 0;
}             
