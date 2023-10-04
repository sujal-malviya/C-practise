#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200]; // merged array should be large enough to hold both arrays
    int n1, n2, mergedSize;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays
    mergedSize = n1 + n2;
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
