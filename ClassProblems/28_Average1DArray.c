// 28. Write a program to find the average of all the odd elements in an array.

#include <stdio.h>
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6}, i, sum, average, odd_counter=0;
    

    for (i = 0; i < 6; i++)
    {
        if(arr[i]%2!=0){
            sum+=arr[i];
            odd_counter+=1;
        }
    }
    
    average = sum/odd_counter;

    printf("The average of all the odd elements in the array are: %d", average);
    
    return 0;
}