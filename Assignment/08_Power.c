// C program to calculate the power of a number.

#include <stdio.h>
int main() {
    int num, exponent, result=1, i;

    printf("\nEnter the number: ");
    scanf("%d", &num);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    for(i=0; i<exponent; i++){
        result*=num;
    }

    printf("%d^%d = %d\n\n",num, exponent, result);
    return 0;
}
