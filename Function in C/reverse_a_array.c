#include <stdio.h>

void reverseArr(int arr[], int n);
void printArr(int arr[], int n);
void inputArr(int arr[], int n);

void reverseArr(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void inputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    inputArr(arr, n);

    printf("Original array: ");
    printArr(arr, n);

    reverseArr(arr, n);

    printf("Reversed array: ");
    printArr(arr, n);

    return 0;
}