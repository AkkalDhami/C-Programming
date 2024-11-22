#include <stdio.h>

int calculateSi(float *p, float *r, float *t)
{
    return (*p) * (*r) * (*t) / 100;
}

int main()
{
    float p, r, t, interest;

    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Rate of interest: ");
    scanf("%f", &r);

    printf("Enter Time in years: ");
    scanf("%f", &t);

    interest = calculateSi(&p, &r, &t);

    printf("Simple Interest: %.2f\n", interest);
    printf("\nProgram Executed By Akkal Dhami</>\n\n");
    return 0;
}
