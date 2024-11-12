#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void findDuplicates(int arr[], int size) {
    int hash[MAX] = {0}; // Initialize hash table

    printf("Duplicate elements are: ");
    for (int i = 0; i < size; i++) {
        hash[arr[i]]++; // Increment the count for each element
    }

    for (int i = 0; i < MAX; i++) {
        if (hash[i] > 1) {
            printf("%d ", i); // Print the element if it appears more than once
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, size);
    return 0;
}

