#include <stdio.h>
typedef struct complex
{
    float i;
    float j;
} complex;

complex add(complex i, complex j);
complex add(complex i, complex j)
{
    complex temp;
    temp.i= i.i + j.j;
    temp.j = i.j + j.j;
    return (temp);
}
int main()
{
    complex i, j, result;

    printf("For !st Vector  \n");
    printf("Enter the vector componetts i and j : ");
    scanf("%f %f", &i.i, &i.j);
    printf("\nFor 2nd Vector \n");
    printf("Enter the vector componetts i and j : ");
    scanf("%f %f", &j.i, &j.j);

    result = add(i, j);

    printf("Sum of Given Two Vector : %.1fi + %.1fj", result.i, result.j);
    return 0;
}
