#include <stdio.h>
#include <math.h>

// function prototype
long long convertOctalToDecimal(int octalNumber);

int main()
{

    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

// function to convert octalNumber to decimal
long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while (octalNumber != 0)
    {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        octalNumber /= 10;
        i++;
    }


    return decimalNumber;
}
