// To count the total words in th egiven sentences input by the user.

#include <stdio.h>
int wordCount(char str[]);
int wordCount(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != '\0')
        {
            count++;
        }
    }
    return count + 1;
}
int main()
{
    char str[100];
    printf("Enter a Sentences: ");
    fgets(str, sizeof(str), stdin);

    printf("Number of words in the sentence: %d\n", wordCount(str));
    return 0;
}