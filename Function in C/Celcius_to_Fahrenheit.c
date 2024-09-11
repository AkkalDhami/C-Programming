#include <stdio.h>

float tempConversion(float cel){
    return (cel * 9 / 5) + 32;
}
int main()
{
    float c;
    printf("Enter the  Tempr in Celcius:");
    scanf("%f", &c);

    printf("The Tempr in Fahrenheit is %.2fF\n",tempConversion(c));

    return 0;
}