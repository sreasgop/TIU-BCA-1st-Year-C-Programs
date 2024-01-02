// C Program to Add Two Matrix Using Multi-dimensional Arrays 

#include <stdio.h>
int main() {
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{5, 10, 15}, {20, 25, 30}, {35, 40, 45}};
    int i, j, sum=0;

    printf("The array is: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("  %d ", arr[i][j]);
            sum+=arr[i][j];
        }
        printf("\n");
    }
    printf("The sum is: %d", sum);
    
    return 0;
}
    return 0;
}