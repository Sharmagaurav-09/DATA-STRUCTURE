#include <stdio.h>

void linearSearch(int arr[], int size, int key) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d (Linear Search)\n", key, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found (Linear Search)\n", key);
    }
}

void binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    int found = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            printf("Element %d found at index %d (Binary Search)\n", key, mid);
            found = 1;
            break;
        }

        // If key is greater, ignore left half
        if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found (Binary Search)\n", key);
    }
}

int main() {
    int size, key, choice;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array (sorted for binary search):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the element to search
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Ask the user to choose between linear and binary search
    printf("Choose the search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (Array should be sorted)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        linearSearch(arr, size, key);
    } else if (choice == 2) {
        // Ensure the array is sorted for binary search
        printf("Note: Binary Search works only on sorted arrays.\n");
        binarySearch(arr, size, key);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
