// C Program to check whether a number is prime or not. 

#include <stdio.h>
int main() {
    int num, i, is_prime=1;
    
    printf("\nEnter any number: ");
    scanf("%d", &num);

    if(num<=1){
        printf("A prime number is meant to be greater than 1. ");
    } else {
        for(i=2; i<=num/2; i++){
            if(num%i==0){
                is_prime = 0;
                break;
            }
        }

        if(is_prime==1){
            printf("Entered number is prime.");
        } else{
            printf("Entered number is not prime!");
        }

    }

    

    return 0;
}