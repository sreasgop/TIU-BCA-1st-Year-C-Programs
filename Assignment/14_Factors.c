// C Program to Display Factors of a Number

#include <stdio.h>
int main() {
    int num, i; 

    printf("\nEnter a number: ");
    scanf("%d", &num);
    
    printf("Factors of %d: ", num);
    for(i=1; i<=num; i++){
        if(num%i==0)
        {
            printf("%d ",i);
        }
        
    }
    
    printf("\n\n");

    return 0;
}