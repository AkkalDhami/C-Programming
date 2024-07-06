#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the  Tempr in Celcius:");
    scanf("%f", &c);

    printf("The Tempr in Fahrenheit is %.3f\n", (c * 9 / 5) + 32);
    printf("The Tempr in Kelvin is %.3f\n", c + 273);

    return 0;
}