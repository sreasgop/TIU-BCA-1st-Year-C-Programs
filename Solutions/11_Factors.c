// 11. Write a program to find the factors of a number. 

#include <stdio.h>
int main() {
    int user_input, factor, i, is_prime;

    printf("Enter a number: ");
    scanf("%d", &user_input);
    
    printf("Factors of %d: ", user_input);

    for(i=1; i<=user_input; i++){
        if(user_input%i==0){
            printf("%d ", i);            
        }
    }

    return 0;
}