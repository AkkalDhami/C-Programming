#include <stdio.h>
int checkPalindrome()
{
    int n, rev = 0, temp;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (temp == rev)
    {
        printf("Number is a Palindrome\n");
    }
    else
    {
        printf("Number is not a Palindrome \n");
    }
}
int main()
{
    checkPalindrome();
    return 0;
}