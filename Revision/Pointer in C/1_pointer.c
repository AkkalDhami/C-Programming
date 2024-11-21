//? Demonstrate the use of pointer in C.

#include <stdio.h>

int main()
{

    int x = 1;
    int *ptr = &x;
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", *ptr);
    printf("Value of ptr: %d\n", *ptr);

    printf("\nAddress of x: %u\n", &x);
    printf("Address of x: %u\n", ptr);
    printf("Address of ptr: %u\n", &ptr);

    return 0;
}