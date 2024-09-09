// 18. Write a program to find sum of the fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... n terms.

#include <stdio.h>
int main() {
    int first_term=0, second_term=1, new_term=0, sum, n, i;
    
    printf("Enter the nth term: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("%d\t", new_term);
        first_term = second_term;
        second_term = new_term;
        sum+=new_term;
        new_term = first_term + second_term;
        
        
    }

    printf("\nThe Sum of Fibonacci Series till %dth term: %d", n, sum);

    return 0;
}