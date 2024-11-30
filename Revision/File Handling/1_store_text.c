#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt", "w");

    fprintf(file, "File Handling in C Programming\n");
    fprintf(file, "Program Executed By Akkal Dhami\n");
    return 0;
}