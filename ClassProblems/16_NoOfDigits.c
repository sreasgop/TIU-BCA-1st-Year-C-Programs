// 16. Write a program to find the number of digits of a number. 

#include <stdio.h>
int main() {
    long long int number, no_of_digits;

    printf("Enter a number: ");
    scanf("%lld", &number);

    if(number<0){
        number = -(number);
    }

    no_of_digits = 0;
    while(number>0){
        number/=10;
        no_of_digits++;
    }

    printf("The number of digits are: %d", no_of_digits);

    return 0;
}