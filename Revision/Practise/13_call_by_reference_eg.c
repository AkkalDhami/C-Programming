//? Call by reference:
//* Function arguments are passed by reference.
//* The original values are modified.

#include <stdio.h>
void callByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    callByReference(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}