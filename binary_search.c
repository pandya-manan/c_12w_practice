#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void acceptElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the element for position %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
}

void binaryFinder() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return;
    }

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    acceptElements(arr, n);
    bubbleSort(arr, n);

    int key;
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);
    if (result != -1)
        printf("The element %d is found at position %d.\n", key, result + 1);
    else
        printf("The element %d is not found in the array.\n", key);

    free(arr); // Free dynamically allocated memory
}

int main() {
    binaryFinder();
    return 0;
}
