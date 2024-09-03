#include <stdio.h>
int findLen(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
int stringrev(char str[])
{
    int len = findLen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
int main()
{

    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    stringrev(str);
    return 0;
}