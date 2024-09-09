// C Program to Calculate Average Using Arrays 

#include <stdio.h>
int main() {
    int n, arr[100], i, sum = 0, average;
    
    printf("\nEnter the no. of elements: ");
    scanf("%d", &n);
    
    printf("\nEnter the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    
    average = sum/n;

    printf("\nAverage: %d\n\n", average);

    return 0;
}