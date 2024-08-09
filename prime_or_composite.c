#include <stdio.h>

int main() {
    int n;
    int r = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            r++;
        }
    }

    if (r == 0) {
        printf("%d is prime number.\n", n);
    } else {
        printf("%d is composite number.\n", n);
    }

    return 0;
}