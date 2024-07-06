#include <stdio.h>
// #include <string.h>

int main()
{
    char days[7][20];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the name of day %d: ", i+1);
        scanf("%s", days[i]);
    }

    printf("\nDays of the week:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Day %d: %s\n", i + 1, days[i]);
    }
    // printf("The Codes Executed By Akkal Dhami \n\n");
    printf("The Codes Executed By Rajan Chhatyal \n\n");
    return 0;
}
