#include <stdio.h>

int stringLength(char str[])
{
    int len = 0;

    // !Using while loop
    // while (str[len] != '\0')
    // {
    //     len++;
    // }

    //! using for loop
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len - 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    // gets(str);
    fgets(str, 100, stdin);
    int len = stringLength(str);

    printf("The length of the string is: %d\n", len);

    return 0;
}
