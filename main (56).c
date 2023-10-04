#include <stdio.h>

int main() {
    int arr[100], n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to compare each element with the rest of the elements
    for (int i = 0; i < n; i++) {
        int isUnique = 1; // Assume the element is unique

        // Check if the element is the same as any previous element
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; // Element is not unique
                break;
            }
        }

        // If the element is unique, increment the count
        if (isUnique) {
            count++;
        }
    }

    printf("Total number of unique elements in the array: %d\n", count);

    return 0;
}
