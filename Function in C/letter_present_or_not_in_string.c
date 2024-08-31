#include <stdio.h>
#include <string.h>

void containsLetter(char str[], char c)
{
    int found = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Yes, The given string contains '%c'.\n", c);
    }
    else
    {
        printf("No, The given string doesn't contain '%c'.\n", c);
    }
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
