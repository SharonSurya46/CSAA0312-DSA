#include <stdio.h>

int findMissingElement(int arr[], int n) {
    int total = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Calculate the sum of the array elements
    }

    return total - sum; // The missing element
}

int main() {
    int arr[] = {0, 1, 2, 3, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int missingElement = findMissingElement(arr, n);
    printf("The missing element is: %d\n", missingElement);
    return 0;
}

