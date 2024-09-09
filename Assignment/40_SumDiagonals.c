// Write a program to find the sum of two diagonals of a square matrix.

#include <stdio.h>

#define MAX_SIZE 10

// Function to find the sum of diagonals in a square matrix
void findDiagonalSum(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sum of the primary diagonal
    for (int i = 0; i < size; i++) {
        primaryDiagonalSum += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    for (int i = 0; i < size; i++) {
        secondaryDiagonalSum += matrix[i][size - 1 - i];
    }

    // Print the sum of diagonals with newline characters
    printf("Sum of Primary Diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of Secondary Diagonal: %d\n", secondaryDiagonalSum);
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    // Find and print the sum of diagonals
    findDiagonalSum(matrix, size);

    return 0;
}
