#include <stdio.h>
#include <string.h>

void containsLetter(char str[], char c)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            printf("Yes, The given string contains '%c'.\n", c);
            return;
        }
    }
    printf("No, The given string doesn't contain '%c'.\n", c);
}

int main()
{
    char str[50];
    char letter;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a letter: ");
    scanf("%c", &letter);

    containsLetter(str, letter);

    return 0;
}
