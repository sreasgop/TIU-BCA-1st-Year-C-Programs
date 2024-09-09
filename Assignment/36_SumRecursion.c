// Write a recursive function to find the sum of n natural numbers

#include <stdio.h>

int sumofn(int);

int main() {
    int num; 
    printf("\nEnter the value of n: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers: %d", num, sumofn(num));
    printf("\n\n");
    return 0;
}

int sumofn(int n){
    if(n==0){
        return 0;
    } else{
        return n + sumofn(n-1); 
    }
}