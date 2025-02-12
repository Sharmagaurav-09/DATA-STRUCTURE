#include <stdio.h>

void insert(int arr[], int *size, int element, int position) {
    // Shift elements to the right to make space for the new element
    for (int i = *size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element at the specified position
    arr[position - 1] = element;
    (*size)++; // Increase the size of the array
}

int main() {
    int size, element, position;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted and the position
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    // Validate the position
    if (position > size + 1 || position < 1) {
        printf("Invalid position!\n");
    } else {
        // Insert the element
        insert(arr, &size, element, position);

        // Display the updated array
        printf("Array after insertion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
