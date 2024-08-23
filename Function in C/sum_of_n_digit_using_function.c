#include <stdio.h>

int sumOfDigit(int); 
int sumOfDigit(int x)
{
    int sum = 0;
    while (x != 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sumOfDigit(n);
    printf("Sum of %d digits : %d", n, result);
    return 0;
}