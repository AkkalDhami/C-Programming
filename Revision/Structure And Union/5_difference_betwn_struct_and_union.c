#include <stdio.h>

struct structure
{
    int id;
    char name[20];
};
union uni
{
    int id;
    char name[20];
};

int main()
{
    struct structure s1;
    union uni u1;

    printf("Enter ID  for Structure: ");
    scanf("%d", &s1.id);

    printf("Enter Name  for Structure: ");
    scanf("%s", &s1.name);

    printf("Enter ID  for Union: ");
    scanf("%d", &u1.id);
    printf("Enter Name  for Union: ");
    scanf("%s", &u1.name);

    printf("Structure: ID: %d\nName: %s\n", s1.id, s1.name);

    printf("Union: ID: %d\nName: %s\n", u1.id, u1.name);

    printf("\nProgram Executed By Akkal Dhami..\n\n");

    return 0;
}