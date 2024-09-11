#include <stdio.h>
#include <math.h>

void solveEqn(float a, float b, float c)
{
    float discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant >= 0) {
        float x1 = (-b - sqrt(discriminant)) / (2 * a);
        float x2 = (-b + sqrt(discriminant)) / (2 * a);
        printf("The solutions are: x1 = %.2f and x2 = %.2f\n", x1, x2);
    } else {
        printf("The equation has complex roots.\n");
    }
}

int main()
{
    float a, b, c;

    printf("Enter the coefficients of the quadratic equation (a, b, c): \n");
    scanf("%f %f %f", &a, &b, &c);
    solveEqn(a, b, c);

    return 0;
}
