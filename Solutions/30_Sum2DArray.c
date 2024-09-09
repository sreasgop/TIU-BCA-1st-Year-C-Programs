// 30. Write a program to find sum of all the elements in a 2D array.
#include <stdio.h>
int main() {
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j, sum=0;
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