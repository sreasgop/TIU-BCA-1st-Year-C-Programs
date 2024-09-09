// C Program to Find G.C.D Using Recursion 

#include <stdio.h>

int GCD(int, int);

int main() {
    int a, b; 
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d\n", GCD(a, b));
    return 0;
}

int GCD(int num1, int num2){
    if(num2!=0){
        return  GCD(num2, num1 % num2);
    } else {
        return num1;
    }
}
