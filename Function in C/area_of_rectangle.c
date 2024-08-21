#include <stdio.h>
int findArea(int a , int b);
int findArea(int a , int b)
{

    int area = a * b;
    // return (area);
    printf("The area of the rectangle is: %d\n", area);
}

int main()
{
    int length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    findArea(length, width);
    // int area = findArea(length, width);
    // printf("The area of the rectangle is: %d", area);
    return 0;
}