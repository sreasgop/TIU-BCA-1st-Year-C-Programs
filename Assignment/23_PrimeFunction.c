// C Program to Check Prime Using User-defined Function 

#include <stdio.h>

int prime(int);

int main() {
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    prime(a);
    return 0;
}

int prime(int num){
    int is_prime = 0, i;
    if(num>1){
        is_prime = 1;
        for(i=2; i<num; i++){
            if(num%i==0){
                is_prime = 0;
                break;
            }
        }
    }
    
    if(is_prime==1){
        printf("%d is a prime number!", num);
    } else{
        printf("Not a prime number!");
    }
}