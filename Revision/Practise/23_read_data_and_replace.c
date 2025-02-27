//? Write a program to read the data from the file “old.txt” and write into the file “new.txt” by replacing the word “desktop” by “laptop” and “keyboard” by “mouse”.

#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    FILE *fptr1, *fptr2;
    int true = 0;

    fptr1 = fopen("old.txt", "r");
    fptr2 = fopen("new.txt", "w");

    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error in opening files!\n");
        return 1;
    }

    while (fscanf(fptr1, "%s", word) != EOF)
    {
        if (strcmp(word, "desktop") == 0)
        {
            fprintf(fptr2, "laptop ");
            true = 1;
        }

        if (strcmp(word, "keyboard") == 0)
        {
            fprintf(fptr2, "mouse ");
            true = 1;
        }
    }

    if (true)
    {
        printf("File date replace successfully!!\n");
    }
    else
    {
        printf("Cannot replace!!!\n");
    }

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
