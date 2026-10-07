#include <stdio.h>

int contains(int item, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == item) {
            return 1; // Item found
        }
    }
    return 0; // Item not found
}

int main() {
    int arr[] = {2, 9, 2, 0, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Check if 9 is in the array (returns 1)
    printf("Result: %d\n", contains(9, arr, size));

    return 0;
}
