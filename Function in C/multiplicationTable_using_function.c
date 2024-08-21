#include <stdio.h>

int multiply(int a, int b); // function declaration

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", num, i, multiply(num, i)); // function call
    }

    return 0;
}

// function definition
int multiply(int a, int b) {
    return a * b;
}
