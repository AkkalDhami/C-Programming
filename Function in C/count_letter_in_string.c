#include <stdio.h>
#include <string.h>

int countLeter(char str[], char c)
{

   int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[50];
    char letter;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a Letter: ");
    scanf("%c", &letter);

    printf("The Given String Contains %d %c ", countLeter(str, letter), letter);

    return 0;
}
