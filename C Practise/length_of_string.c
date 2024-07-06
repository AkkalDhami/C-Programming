#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];
    printf("\nEnter the strings-1 : ");
    gets(a);
    printf("Enter the strings-2 : ");
    gets(b);

    printf("\nLength of the string-1 is: %d\n", strlen(a));

    printf("\nCompare between the string: %d", strcmp(a, b));

    printf("\nAfter concat: ");
    strcat(a, b);
    puts(a);

    printf("\nUppercase of string-1: ");
    puts(strupr(a));

    printf("\nLowercase of string-2: ");
    puts(strlwr(b));

    printf("\nCopy of string-2 in string-1 : ");
    strcpy(a, b);
    puts(a);

    printf("\nReverse of string-1: ");
    puts(strrev(a));


    return 0;
}
