// 09. Write a program to print all the prime numbers between 1 - 100.

#include <stdio.h>
int main() {
    int number, checker, is_prime;
    for(number=2; number<=100; number++){
        is_prime = 1;
        for(checker=2; checker<number; checker++){
            if(number%checker==0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d\t", number);
        }
        
    }
    return 0;
}