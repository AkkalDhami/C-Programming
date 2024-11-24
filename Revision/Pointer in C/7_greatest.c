#include <stdio.h>

int findGreatest(int *ptr)
{
    int large = 0;
    for (int i = 0; i < 10; i++)
    {
        if (*(ptr + i) > large)
        {
            large = *(ptr + i);
        }
    }
    printf("Large number: %d\n", large);
}
int main()
{
    int arr[10], x;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter num-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    findGreatest(arr);
    printf("\nProgram Executed By Akkal Dhami</>\n\n");

    return 0;
}
