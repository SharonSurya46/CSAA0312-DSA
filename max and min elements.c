#include <stdio.h>

void findMaxMinRec(int arr[], int left, int right, int *max, int *min) {
    if (left == right) {
        if (arr[left] > *max) *max = arr[left];
        if (arr[left] < *min) *min = arr[left];
        return;
    }

    int mid = (left + right) / 2;
    findMaxMinRec(arr, left, mid, max, min);
    findMaxMinRec(arr, mid + 1, right, max, min);
}

int main() {
    int arr[] = {3, 5, 1, 8, 2, 7};
    int max = arr[0], min = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    findMaxMinRec(arr, 0, size - 1, &max, &min);
    printf("Maximum: %d, Minimum: %d\n", max, min);
    return 0;
}

