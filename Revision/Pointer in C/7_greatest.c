#include <stdio.h>

int findGreatest(int arr[10], int *ptr, int x)
{
    x = arr[0];
    ptr = &x;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
        }
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
    findGreatest(arr, &x, x);
    printf("\nProgram Executed By Akkal Dhami</>\n\n");

    return 0;
}