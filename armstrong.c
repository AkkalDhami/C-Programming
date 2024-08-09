// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers. 
#include <stdio.h>

int main()
{
    int n, p = 0, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    p = n;
    while (n != 0)
    {
        r = n % 10;
        s = s + r * r * r;
        n = n / 10;
    }
    if (p == s)
        printf("%d is an Armstrong number.\n", p);
    else
        printf("%d is not an Armstrong number.\n", p);

    return 0;
}
