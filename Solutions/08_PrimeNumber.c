// 08. Write a program to prompt the user to enter a number and tell whether the entered number is prime or not.

#include<stdio.h>
int main(){

    int num, is_prime = 1, i;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for(i=2; i < num; i++){
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }


    if (num<=1)
    {
        printf("In order to be Prime a number has to be greater than 1.\n");
    }
    else
    {
        if (is_prime == 1)
        {
            printf("Prime.\n");
        } else 
        {
            printf("Not Prime.\n");
        }
    }    

    return 0;
}