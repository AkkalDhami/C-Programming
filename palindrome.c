// A palindrome number is a number that reads the same forward and backward. Eg: 121, 1234321, 234567898765432..
#include <stdio.h>

int main()
{
    int rev = 0, rem, num, pal = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    pal = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (pal == rev)
    {
        printf("%d is a palindrome number.", pal);
    }
    else
        printf("%d is not a palindrome number.", pal);

    return 0;
}
