// C Program to Find Largest Element of an Array 

#include<stdio.h>
int main(){

    int n, arr[10], largest, i;

    printf("\nEnter the no. of elements: ");
    scanf("%d", &n);
    
    printf("Enter the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    printf("The largest element in the array: %d\n\n", largest);
    return 0;
}