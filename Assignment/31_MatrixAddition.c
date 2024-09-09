// C Program to Add Two Matrix Using Multi-dimensional Arrays 

#include <stdio.h>
int main() {
    
    int i, j;
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{5, 10, 15}, {20, 25, 30}, {35, 40, 45}};
    int arrsum[3][3];
    

    printf("\n\nThe 1st matrix: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("  %d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    printf("The 2nd matrix: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("  %d ", arr2[i][j]);
            arrsum[i][j] = arr[i][j]+arr2[i][j];
        }
        printf("\n");
    }

    printf("\n\n");

    printf("The Sum of two above Matrix: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("  %d ", arrsum[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}