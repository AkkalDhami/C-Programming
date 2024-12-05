#include <stdio.h>

int findSum(int *ptr)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += *(ptr + i);
    }
    printf("Sum of number: %d\n", sum);
}
int main()
{
    int arr[10];
    printf("Enter 10 Numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter num-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    findSum(arr);
    printf("\nProgram Executed By Akkal Dhami</>\n\n");

    return 0;
}
