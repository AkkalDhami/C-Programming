#include <stdio.h>

float add(float a, float b);
float add(float a, float b)
{
    return a + b;
}

float diff(float a, float b)
{
    return a - b;
}

float product(float x, float y)
{
    return x * y;
}

float div(float x, float y)
{
    return x / y;
}

int main()
{
    float a, b;
    printf("\nEnter two number: ");
    scanf("%f %f", &a, &b);
    printf("Addition: %.2f\n", add(a, b));
    printf("Subtraction: %.2f\n", diff(a, b));
    printf("Multiplication: %.2f\n", product(a, b));
    printf("Division: %.2f\n", div(a, b));

    return 0;
}