#include <stdio.h>

int countEven(int arr[], int n);

int main()
{
    int y;
    printf("Enter the number of elements: ");
    scanf("%d", &y);
    int arr[y];

    for (int i = 0; i < y; i++)
    {
        printf("Enter [%d] elements of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int evenCount = countEven(arr, y);
    printf("Number of even elements: %d\n", evenCount);

    return 0;
}

int countEven(int arr[], int n)
{
    int count = 0;
    printf("\nEven elements: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            count++;
        }

    }
    printf("\n");
    return count;

}
