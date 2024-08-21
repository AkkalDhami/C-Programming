#include<stdio.h>


int add(int a, int b);
int add(int a, int b){
    return a + b;
}

int diff(int a, int b){
    return a - b;
}

int product(int x, int y){
    return x * y;
}

int div(int x, int y){
    return x / y;
}

int modu(int x, int y){
    return x % y;
}


int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
   
    printf("Addition: %d\n", add(a,b));
    printf("Subtraction: %d\n", diff(a,b));
    printf("Multiplication: %d\n", product(a,b));
    printf("Division: %d\n", div(a,b));
    printf("Remainder: %d\n", modu(a,b));
    return 0;
}