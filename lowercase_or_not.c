#include<stdio.h>
int main()
{
    // 97-122 ==>a-z ASCII values
    char ch ;
    printf("Enter Characters:");
    scanf("%c",&ch);

    if (ch<=122 && ch>=97)
    {
        printf("It is lowercase.");
    }
    else
    printf("It is not lowercase.");
    return 0;
}