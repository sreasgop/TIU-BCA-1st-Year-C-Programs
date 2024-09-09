// 15. Write a program to find sum of digits of a number.

#include <stdio.h>
int main() {
    
    int number, unit_digit, sum_of_digits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number > 0)
    {
        unit_digit = number % 10;
        sum_of_digits += unit_digit;
        number/=10;
    }
    
    printf("The sum of digits are: %d", sum_of_digits);
    
    return 0;
}