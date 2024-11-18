#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("teest.txt", "r");
    if (fptr == NULL)
    {
        printf("Error! File could not be opened.");
    }
    else
    {

        fclose(fptr);
    }

    return 0;
}