#include <stdio.h>
#include <math.h>

int deciToOct(int n)
{
    int oct = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 8;
        n /= 8;
        oct += rem * i;
        i *= 10;
    }

    return oct;
}
int main()
{
    int n;
    int oct;

    printf("Enter a decimal number: ");
    scanf("%d", &n);
    oct = deciToOct(n);
    printf("%d in decimal =  %d in octal", n, oct);

    return 0;
}