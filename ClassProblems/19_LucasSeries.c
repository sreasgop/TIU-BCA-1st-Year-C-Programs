// 19. Write a program to find sum of Lucas Series: 2, 1, 3, 4, 7, 11......... n terms.

#include <stdio.h>
int main() {
    int first_term = 2, second_term = 1, new_term = 0, sum, n, i;
    
    printf("Enter the nth term: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("%d\t", first_term);
        sum+=first_term;
        new_term = first_term + second_term;
        first_term = second_term;
        second_term = new_term;
    }

    printf("\nThe Sum of the Lucas Series till %dth term: %d", n, sum);

    return 0;
}