#include <stdio.h>

void delete(int arr[], int *size, int position) {
    // Shift elements to the left to fill the gap created by the deleted element
    for (int i = position - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; // Decrease the size of the array
}

int main() {
    int size, position;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position to delete an element
    printf("Enter the position to delete the element: ");
    scanf("%d", &position);

    // Validate the position
    if (position > size || position < 1) {
        printf("Invalid position!\n");
    } else {
        // Delete the element
        delete(arr, &size, position);

        // Display the updated array
        printf("Array after deletion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void delete(int arr[], int *size, int position) {
    // Shift elements to the left to fill the gap created by the deleted element
    for (int i = position - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; // Decrease the size of the array
}

int main() {
    int size, position;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position to delete an element
    printf("Enter the position to delete the element: ");
    scanf("%d", &position);

    // Validate the position
    if (position > size || position < 1) {
        printf("Invalid position!\n");
    } else {
        // Delete the element
        delete(arr, &size, position);

        // Display the updated array
        printf("Array after deletion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
