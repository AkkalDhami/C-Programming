#include <stdio.h>

int findSum(int arr[10], int *ptr, int x)
{
    x = 0;
    ptr = &x;
    for (int i = 0; i < 10; i++)
    {
        *ptr += arr[i];
    }
    printf("Largest number is: %d\n", *ptr);
}
int main()
{
    int arr[10], x;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter num-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    findSum(arr, &x, x);
    printf("\nProgram Executed By Akkal Dhami</>\n\n");

    return 0;
}