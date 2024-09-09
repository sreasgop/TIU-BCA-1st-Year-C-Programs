// 12. Write a program to find the factorial of a number.

#include <stdio.h>
int main() {
    long long int num, factorial = 1, i; 

    printf("Enter the n!: ");
    scanf("%lld", &num);

    for(i=1; i<=num; i++){
        factorial*=i;
    }

    printf("%lld! is equal to: %lld", num, factorial);

    return 0;
}