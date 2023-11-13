// 25. Write a program to find the summation of all the elements in an array. 

#include <stdio.h>
int main() {
    
    int i, array_sum = 0, arr1[5];

    printf("Enter 5 elements in an array: ");

    for (i = 0; i < 5; i++){
        scanf("%d",&arr1[i]);
    }

    printf("The Array is: ");
    for(i=0;i<5;i++){
        printf("%d ",arr1[i]);
        array_sum += arr1[i];
    }

    printf("\nThe sum of the array: %d",array_sum);

    return 0;
}