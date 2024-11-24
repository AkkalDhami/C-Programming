//? Demonstrate the use of pointer in C.

#include <stdio.h>

int main()
{

    int x = 1;
    int *ptr = &x;
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", *ptr);
    printf("Value of x: %d\n", *(&x);

    printf("\nAddress of x: %u\n", &x);
    printf("Address of x: %u\n", ptr);

    return 0;
}
