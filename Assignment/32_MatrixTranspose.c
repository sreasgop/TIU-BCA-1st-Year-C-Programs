// C Program to Find Transpose of a Matrix 

#include <stdio.h>
int main() {
    int arr[3][3];
    int arr2[3][3];

    printf("\nEnter a 3X3 matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\nTranspose of the matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr[j][i];
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}