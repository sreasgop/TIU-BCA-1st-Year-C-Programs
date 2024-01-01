// C Program to Find the Sum of Natural Numbers using Recursion 

#include <stdio.h>

int sum(int);

int main() {
    int a; 
    printf("\nEnter the vlaue of n: ");
    scanf("%d", &a);
    printf("The sum of first %d natural numbers: %d\n\n", a, sum(a));
    return 0;
}

int sum(int num){
    if(num!=0){
        return num + sum(num - 1);
    } else {
        return num;
    }
}