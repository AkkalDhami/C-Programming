//? WAP to solve quadratic equations using function.

#include <stdio.h>
#include <math.h>

void solveQuadraticEqn(float a, float b, float c)
{
    float D = pow(b, 2) - 4 * a * c;
    if (D > 0)
    {
        printf("\nThe equation has real and distinct roots.\n");
        float x1 = (-b - sqrt(D)) / (2 * a);
        float x2 = (-b + sqrt(D)) / (2 * a);
        printf("The solutions are: x1 = %.2f and x2 = %.2f\n", x1, x2);
    }
    else if (D == 0)
    {
        printf("\nThe equation has real and equal roots.\n");
        float x = -b / (2 * a);
        printf("The solution is: x1 = x2 = %.2f\n", x);
    }
    else
    {
        printf("\nThe equation has complex roots.\n");
        float realPart = (-b / (2 * a));
        float imaginaryPart = (sqrt(-D) / (2 * a));
        printf("The solutions are: x1 = %.2f + %.2fi and x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main()
{
    float a, b, c;
    do
    {
        printf("Enter the coefficent a: ");
        scanf("%f", &a);
        
        if (a == 0)
        {
            printf("a cannot be zero.\n");
        }
    } while (a == 0);

    printf("Enter the coefficent b: ");
    scanf("%f", &b);

    printf("Enter the coefficent c: ");
    scanf("%f", &c);

    solveQuadraticEqn(a, b, c);

    return 0;
}
