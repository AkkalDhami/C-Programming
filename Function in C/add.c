#include <stdio.h>

int add();
int add()
{
    int a, b;
    printf("Enter two number number: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;

    return sum;
}
int main()
{

    printf("Sum of two number is: %d", add());
    return 0;
}