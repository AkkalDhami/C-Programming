#include <stdio.h>

int simpleInterest(int p, int t, int r);

int simpleInterest(int p, int t, int r){
    return (p * t * r) / 100;
}

int main()
{
    int principal, time, rate;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the time period: ");
    scanf("%d", &time);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    printf("Simple Interest: %d", simpleInterest(principal, time, rate));

    return 0;
}             