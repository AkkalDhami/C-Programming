#include <stdio.h>
#include <math.h>

struct magnitude
{
    int real, imag;
};

double calculate_magnitude(struct magnitude m)
{
    return sqrt(pow(m.real, 2) + pow(m.imag, 2));
}

int main()
{
    struct magnitude m = {2, 3};
    struct magnitude *ptr = &m;
    printf("Real part: %d\n", ptr->real);
    printf("Imaginary part: %d\n", ptr->imag);

    printf("Magnitude : %.2f", calculate_magnitude(m));

    return 0;
}