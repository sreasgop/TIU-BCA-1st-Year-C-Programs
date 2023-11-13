// 29. Write a program to find the largest element in an array. 
#include <stdio.h>
int main() {
    int arr[10]={2, 5, 12, 8, 7, 17}, i, largest;

    largest = arr[0];

    for (i = 0; i < 10; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    
    printf("Largest element: %d", largest);

    return 0;
}