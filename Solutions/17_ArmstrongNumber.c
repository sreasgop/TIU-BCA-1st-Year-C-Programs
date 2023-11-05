// 17. Write a program to find if a number is armstrong number or not.

#include <stdio.h>
#include <math.h>

int main()
{

    int number, copy_number, unit_digit, no_of_digits, new_number;

    printf("Enter a number: ");
    scanf("%d", &number);

    copy_number = number;

    no_of_digits = 0;
    while (number > 0)
    {
        number /= 10;
        no_of_digits++;
    }

    number = copy_number;

    while (number > 0)
    {
        unit_digit = number % 10;
        new_number += pow(unit_digit, no_of_digits);
        number /= 10;
    }

    if (copy_number == new_number)
    {
        printf("%d is an Armstrong Number.", copy_number);
    }
    else
    {
        printf("%d is not an Armstrong Number.", copy_number);
    }

    return 0;
}