#include <stdio.h>

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int d = (sum(2, 8));
    int d2 = (sum(22, 8));
    int d3 = (sum(12, 8));
    printf("The sum of 2 and 3 is: %d\n, %d, %d", d, d2, d3);
    return 0;
}