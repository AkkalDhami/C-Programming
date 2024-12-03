#include <stdio.h>

int main()
{

    if (rename("student2.txt", "student.txt") == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        perror("Error renaming file");
    }
     printf("Program Executed By Akkal Dhami\n");
    return 0;
}