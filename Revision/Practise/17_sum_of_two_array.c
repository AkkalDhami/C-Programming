//? WAP to find the sum of two array using function and pointer.

#include <stdio.h>

void sumOfTwoArray(int *arr1, int *arr2, int n)
{
    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = *(arr1 + i) + *(arr2 + i);
    }

    printf("\nArray 1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr1 + i));
    }

    printf("\nArray 2: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr2 + i));
    }
    printf("\n\nSum of two array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr3[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements in the first array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements in the second array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    sumOfTwoArray(arr1, arr2, n);
    return 0;
}