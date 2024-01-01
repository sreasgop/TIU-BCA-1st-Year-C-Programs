// C Program to Display Prime Numbers Between Intervals Using Function

#include <stdio.h>
void prime(int, int);

int main() {
    int a, b;
    printf("\nEnter the starting and ending interval: ");
    scanf("%d %d", &a, &b);
    prime(a, b);
    return 0;
}

void prime(int num1, int num2){
    int is_prime, i, j;
    if(num1>=num2){
        printf("Invalid Interval Input!");
    } else{
        for(i=num1; i<=num2; i++){
            is_prime = 0;
            if (i>1) {
                is_prime = 1;
                for(j=2; j<=i/2; j++){
                    if(i%j==0){
                        is_prime = 0;
                    }
                }
            }
            if(is_prime==1){
                printf("%d ", i);
            }
        }
    }
}