// C Program to Display Armstrong Number Between Two Intervals

#include <stdio.h>
#include<math.h>

int main() {
    int start_int, end_int, i, j, num, copy_num, counter, unit_digit, new_num;

    printf("\nEnter the starting and ending intervals: ");
    scanf("%d %d", &start_int, &end_int);
    
    if(start_int>=end_int){
        printf("Invalid Interval Input!\n");
    } else {
        for(i=start_int; i<=end_int; i++) {

            num = i;
            copy_num = num;
            counter = 0;
            new_num = 0;
            
            while(num){
                counter++;
                num/=10;
            }

            num = copy_num;

            while(num){
                unit_digit = num % 10;
                new_num+=pow(unit_digit, counter);
                num/=10;
            }

            if(new_num == copy_num){
                printf("%d ", copy_num);
            }
        }
    }

    return 0;
}