#include <stdio.h>

int sumOfElements(int arr[], int index1, int index2) {
    return arr[index1] + arr[index2];
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int index1 = 1; // Second element
    int index2 = 3; // Fourth element
    int result = sumOfElements(arr, index1, index2);
    printf("Sum of elements at index %d and %d is: %d\n", index1, index2, result);
    return 0;
}

