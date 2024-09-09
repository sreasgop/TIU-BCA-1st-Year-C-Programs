// C Program to Display Prime Numbers Between Two Intervals

#include <stdio.h>
int main() {
    int starting_interval, ending_interval, is_prime, i, j;
    
    printf("\nEnter the starting and ending intervals: ");
    scanf("%d %d", &starting_interval, &ending_interval);

    if(starting_interval>=ending_interval){
        printf("Invalid Interval Input!\n");
    } else {
        for(i=starting_interval; i<=ending_interval; i++){
            is_prime=0;
            if(i>1){
                is_prime = 1;
                for(j=2; j<=i/2; j++){
                    if(i%j==0){
                        is_prime=0;
                        break;
                    }
                }
            }
            if(is_prime==1){
                printf("%d ", i);
            }
        }
    }


    return 0;
}  