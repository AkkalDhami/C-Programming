#include<stdio.h>

int main()
{
    int *ptr, x;
    ptr = &x;
    *ptr = 0;
    printf("Value of x: %d\n", x);

    //Addresse of x:
    printf("Address of x: %u\n", ptr);

    //Dereferencing ptr to get the value of x:
    printf("value of *ptr: %d\n", *ptr);

    (*ptr) += 5;
    printf("Value of x: %d\n", x);
    printf("Add of x: %u\n", &x);

    printf("Value of *ptr: %d\n", *ptr);

    //Incrementing *ptr:
    (*ptr)++;
    printf("Address of x: %u\n", ptr);
    printf("Value of *ptr: %d\n", *ptr);

    //Incrementing ptr:
    ptr++;
    printf("Address of x: %u\n", ptr);
    printf("Value of *ptr: %d\n", *ptr);


    return 0;
}