// C Program to Multiply two Matrices by Passing Matrix to a Function 

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2) {
    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return;
    }

    // Initialize result matrix with zeros
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input dimensions of the second matrix
    printf("\nEnter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply matrices and store the result in 'result' matrix
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    // Display the matrices
    printf("\nFirst Matrix:\n");
    displayMatrix(mat1, rows1, cols1);

    printf("\nSecond Matrix:\n");
    displayMatrix(mat2, rows2, cols2);

    printf("\nResultant Matrix after multiplication:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
