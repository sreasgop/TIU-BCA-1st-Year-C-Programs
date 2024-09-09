// C Program to Check Armstrong Number

#include <stdio.h>
#include<math.h>

int main() {
    int num, copy_num, counter, unit_digit, new_num; 

    printf("\nEnter a number: ");
    scanf("%d", &num);

    copy_num = num;

    counter = 0;
    while(num){
        counter++;
        num/=10;
    }

    num = copy_num;

    while(num){
        unit_digit = num % 10;
        new_num+=pow(unit_digit, counter);
        num/=10;
    }

    if(new_num == copy_num){
        printf("Armstrong\n\n");
    } else {
        printf("Not Armstrong\n\n");
    }

    return 0;
}