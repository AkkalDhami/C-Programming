#include <stdio.h>

void fibonacci(int n) {
    int prev = 0, curr = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", prev);
        next = prev + curr;
        prev = curr;
        curr = next;
        
    }
}

int main() {
    int n;
    while (1) {
        printf("Enter number upto nth terms: ");
        if (scanf("%d", &n) == 1 && n >= 0) {
            break;
        }
        printf("Please enter a positive integer.\n");
    }
    fibonacci(n);
    return 0;
}