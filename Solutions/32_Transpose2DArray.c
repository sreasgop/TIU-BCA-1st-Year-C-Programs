// 32. Write a program to find the tranpose of a matrix (2D array).

#include <stdio.h>
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 5, 3}};
    int arr2[3][3];

    printf("The matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }

    printf("\nTranspose of the matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }


    return 0;
}