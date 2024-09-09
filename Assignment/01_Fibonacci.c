// 1. C Program to Display Fibonacci Sequence

#include<stdio.h>
int main() {
    int i, n;
    long long int first_term = 0, second_term = 1, next_term = 0;
    
    printf("\nEnter the nth term: ");
    scanf("%d", &n);
    
    for (i = 0; i <n; i++)
    {
        printf("%lld ", next_term);
        first_term = second_term; 
        second_term = next_term; 
        next_term = first_term + second_term;
    }
    
    return 0;
}
