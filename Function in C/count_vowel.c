// To count the vowel letter in the given sentence.

#include <stdio.h>
#include <string.h>

int containsLetter(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    containsLetter(str);
    printf("No of Vowel : %d", containsLetter(str));

    return 0;
}