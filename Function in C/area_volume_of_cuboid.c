#include <stdio.h>

int findArea(int l, int b, int h)
{
    return (2 * (l * b + l * h + b * h));
}
int findVolume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    int length, breadth, height;
    printf("\nEnter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    printf("Enter the height: ");
    scanf("%d", &height);
    
    int area = findArea(length, breadth, height);
    int volume = findVolume(length, breadth, height);
    
    printf("The area of the cuboid is: %d\n", area);
    printf("The volume of the cuboid is: %d\n", volume);

    return 0;
}