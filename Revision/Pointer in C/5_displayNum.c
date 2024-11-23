#include <stdio.h>

int displayNum(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: %d\n", i + 1, *(ptr + i));
    }
}
int main()
{
    int arr[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nYou entered:\n");
    displayNum(arr);
    printf("\nProgram Executed By Akkal Dhami</>\n\n");

    return 0;
}
