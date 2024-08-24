#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("\nEnter a word: ");

    gets(str);
 

    if (isPalindrome(strlwr(str)))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {                       
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
