// C Program to Check Whether a Number is Palindrome or Not

#include <stdio.h>
int main() {
    int num, temp_num, i, unit_digit, reversed_num;

    printf("\nEnter any number: ");
    scanf("%d", &num);

    temp_num = num;

    while(num){
        unit_digit = num % 10; 
        reversed_num = reversed_num * 10 + unit_digit;
        num/=10;
    }

    if(temp_num==reversed_num){
        printf("\n%d is a Palindrome number!\n", temp_num);
    } else{
        printf("\n%d is not a Palindrome number.\n", temp_num);
    }


    return 0;
}