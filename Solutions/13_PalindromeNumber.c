// 13. Write a program to check whether a number is palindrome or not. 

#include <stdio.h>
int main() {
    int num, num_copy, unit_digit, reversed_num = 0, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    num_copy = num;

    while (num>0)
    {
        unit_digit = num % 10;
        reversed_num = reversed_num * 10 + unit_digit;
        num = num / 10;
    }
    
    if (num_copy == reversed_num)
        printf("%d is a Palindrome Number!", num_copy);
    else
        printf("%d is not a Palindrome Number!", num_copy);

    return 0;
}