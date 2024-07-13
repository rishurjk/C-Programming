#include <stdio.h>
// Function to find the pivot element
int findPivot(int arr[], int size) {
    int totalSum = 0;
    int i;
    for (i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (i = 0; i < size; i++) {
        totalSum -= arr[i]; // Total sum now represents the right sum for index i

        if (leftSum == totalSum) {
            return i; // Found the pivot element
        }

        leftSum += arr[i];
    }

    return -1; // No pivot element found
}

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pivotIndex = findPivot(arr, size);

    if (pivotIndex != -1) {
        printf("Pivot element is at index %d with value %d\n", pivotIndex, arr[pivotIndex]);
    } else {
        printf("No pivot element found\n");
    }

    return 0;
}

