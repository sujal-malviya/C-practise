#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Flag to indicate if duplicates are found
    int foundDuplicate = 0;

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate found: %d\n", arr[i]);
                foundDuplicate = 1;
            }
        }
    }

    if (!foundDuplicate) {
        printf("No duplicates found in the array.\n");
    }

    return 0;
}
