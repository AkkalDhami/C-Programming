#include <stdio.h>
#include <string.h>

int countLeter(char str[], int count, char c)
{

    count = 0;
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

    int count = 0;
    char str[50];
    char letter;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a Letter: ");
    scanf("%c", &letter);

    printf("The Given String Contains %d %c ", countLeter(str, count, letter), letter);

    return 0;
}