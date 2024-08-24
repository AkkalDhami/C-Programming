#include <stdio.h>

int getElem() {
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n); 
    return n;
}

void inputNumbers(float arr[], int n) {
    printf("Enter %d numbers:\n", n); 
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]); 
    }
}

float calculateSum(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float calculateAvg(float arr[], int n) {
    float sum = calculateSum(arr, n);
    return sum / n;
}

float calculateMax(float arr[], int n) {
    float max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

float calculateMin(float arr[], int n) {
    float min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n = getElem(); 
    float numbers[n];
    inputNumbers(numbers, n);

    float sum = calculateSum(numbers, n);
    float avg = calculateAvg(numbers, n);
    float max = calculateMax(numbers, n);
    float min = calculateMin(numbers, n);

    printf("The sum of given %d numbers is: %.2f\n", n, sum); 
    printf("The average of given %d numbers is: %.2f\n", n, avg); 
    printf("The Maximum no. of given %d numbers is: %.2f\n", n, max); 
    printf("The Minimum no. of given %d numbers is: %.2f\n", n, min); 

    return 0;
}