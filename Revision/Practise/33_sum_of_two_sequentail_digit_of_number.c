//? WAP to find the sum of the two sequential digits of a number.
//? WAP to find the sum of the two sequentail digits of a number. 
//? [Hint: If the number is: 1234, the output should be: sum of digits=12+34=46]

#include <stdio.h>

int sum(int n)
{
    int sum = 0, rem;
    while (n != 0)
    {
        rem = n % 100;
        sum = sum + rem;
        n /= 100;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of the digits of %d is %d", n, sum(n));
    return 0;
}