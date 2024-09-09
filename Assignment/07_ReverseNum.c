// C Program to Reverse a Number

#include<stdio.h>

int main() {
    
    int num, unit_digit, reverse_num=0;
    
    printf("\nEnter a number: ");
    scanf("%d", &num);

    while(num){
        unit_digit = num % 10; 
        reverse_num = reverse_num * 10 + unit_digit;
        num/=10;
    }

    printf("Reversed Number: %d\n\n", reverse_num);

    return 0;
}