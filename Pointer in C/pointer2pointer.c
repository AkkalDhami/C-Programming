#include<stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;

    int **pptr = &ptr;
    printf("Address of i: %p\n", i);
    printf("Value of *pptr: %d\n", **pptr); //:5


    return 0;
}