// 27. Write a program to reverse an array. 
#include <stdio.h>
int main() {
    int arr[5] = {7, 2, 5, 9, 4};
    int i, j=5-1, t;

    for (i = 0; i < j; i++, j--)
    {   
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    
    printf("The reversed array is : ");
    for(i=0; i<5;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}