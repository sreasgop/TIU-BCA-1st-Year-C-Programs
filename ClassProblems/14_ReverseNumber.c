// 14. Write a program to find reverse of a number.

#include<stdio.h>
int main(){
    int num, unit_digit, reversed_num=0, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=num; i>0; i/=10){
        unit_digit = i % 10;
        reversed_num = reversed_num * 10 + unit_digit;
    }

    printf("Reverse of the number: %d\n", reversed_num);
    return 0;
}