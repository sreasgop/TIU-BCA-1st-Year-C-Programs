// C Program to Find Factorial of a Number Using Recursion

#include <stdio.h>

int factorial(int);

int main() {
    int a; 
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("%d! = %d\n\n", a, factorial(a));
    return 0;
}

int factorial(int num){
    if(num==0){
        return 1;
    } else{
        return num * factorial(num-1);
    }
}