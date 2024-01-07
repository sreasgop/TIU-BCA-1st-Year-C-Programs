// Write a C Program to Find Largest Number from a set of n numbers Using Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    int *arr = (int *)malloc(n * sizeof(int));


    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }


    printf("The largest number is: %d\n", largest);


    free(arr);

    return 0;
}
