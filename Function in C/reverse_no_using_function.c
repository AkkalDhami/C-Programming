#include <stdio.h>

int reverseNumber(int num); // function prototype

// function definition
int reverseNumber(int num)
{
    int rev = 0, n;

    while (num != 0)
    {
        n = num % 10;
        rev = rev * 10 + n;
        num = num / 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = reverseNumber(num); // function call
    printf("Reverse of the number is: %d", result);

    return 0;
}