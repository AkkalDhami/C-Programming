#include <stdio.h>

int main()
{
    int n, r, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    s = 0;
    while (n != 0)
    {
        r = n % 10;
        s = s  + r;
        n = n / 10;
    }
    printf("Sum of the number is: %d\n", s);
    
    return 0;
}