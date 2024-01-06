// Write a program to calculate power (ab) using recursion.

#include <stdio.h>

int power(int, int);

int main() {
    int n, expo; 
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &expo);
    printf("%d^%d = %d", n, expo, power(n, expo));
    printf("\n\n");
    return 0;
}

int power(int num, int exponent){
    if(exponent==0){
        return 1;
    } else{
        return (num * power(num, exponent-1));
    }
}
