#include <stdio.h>

int main()
{
    int n, i, j, arr[100], t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element [%d] :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    printf("Ascending Order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}
