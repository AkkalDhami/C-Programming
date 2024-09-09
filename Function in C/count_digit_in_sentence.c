#include <stdio.h>

void findDigit(char str[])
{

    int count = 0;
    int digit = 0;

    printf("Digits Are : ");
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
            count += (str[i] - '0');
            printf("%d ", str[i] - '0');
        }
    }
    if (digit == 0)
    {
        printf("No digits found in the string.\n");
    }
    printf("\nNumber of digits: %d\n", digit);
    printf("\nSum of digits: %d\n", count);
}
int main()

{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    findDigit(str);
    return 0;
}
