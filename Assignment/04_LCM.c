// C Program to Find LCM of two Numbers
// LCM(a,b) = (a*b)/GCF(a,b)

#include<stdio.h>
int main() {
    int num1, num2, dividend, divisor, remainder, gcf, lcm;
    
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        dividend = num1; 
        divisor = num2;
    } else {
        dividend = num2; 
        divisor = num1;
    }

    while(divisor) {
        remainder = dividend % divisor; 
        dividend = divisor; 
        divisor = remainder;
    }

    gcf = dividend;

    lcm = (num1*num2)/gcf;

    printf("LCM of %d and %d: %d\n\n",num1, num2, lcm);

    return 0;
}