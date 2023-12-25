// C Program to Reverse a Number

#include<stdio.h>
#include<math.h>

int main() {
    
    int num, unit_digit, reverse_num=1, counter=0;
    
    printf("\nEnter a number: ");
    scanf("%d", &num);

    while(num){
        unit_digit = num % 10; 
        reverse_num = reverse_num * 10 + unit_digit;
        counter++;
        num/=10;
    }

    printf("Reversed Number: %lf\n\n", reverse_num/pow(10, counter));

    return 0;
}