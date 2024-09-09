// C Program to Count Number of Digits of an Integer

#include<stdio.h>
int main() {

    int num, counter=0; 

    printf("\nEnter any number: ");
    scanf("%d", &num);
    
    while(num){
        counter++; 
        num/=10;
    }

    printf("Number of Digits: %d\n\n", counter);

    return 0;
}