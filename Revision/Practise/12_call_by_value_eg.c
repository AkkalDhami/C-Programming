//? Call by value:
//* Function arguments are passed by value.
//* The original values are not modified.

#include <stdio.h>

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);

    callByValue(a, b);
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
