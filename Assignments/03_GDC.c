// C Program to Find GCD of two Numbers

#include<stdio.h>
int main() {
    int num1, num2, dividend, divisor, remainder; 

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1>num2)
    {
        dividend = num1; 
        divisor = num2; 
   } else {
        dividend = num2; 
        divisor = num1;
   }
    
    while (divisor)
    {
        remainder = dividend % divisor; 
        dividend = divisor;
        divisor = remainder; 
    }
    
    printf("\nGCD of %d and %d: %d\n", num1, num2, dividend);

    return 0;
}