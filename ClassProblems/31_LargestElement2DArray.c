// 31. Write a program to find maximum element from a 2D array.

#include <stdio.h>
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 5, 3}}, i, j, max=0;

    max = arr[0][0];
    
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (arr[i][j]>max)
            {
                max = arr[i][j];
            }
            
        }
        
    }
    
    printf("Largest element: %d", max);
    return 0;
}