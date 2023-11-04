// 10. Write a program to test whether a number is a perfect number or not.

#include <stdio.h>

int main() {
   long long int userinput, factor, factor_sum=0;

    printf("Enter a number: ");
    scanf("%lld", &userinput);

    for(int i=1; i<userinput; i++){
        if(userinput%i==0){
            factor_sum += i;
        }
    }

    if (userinput==0){
        printf("%lld is not a Perfect number.", userinput);
    }
    else if (userinput == factor_sum) {
        printf("%lld is a Perfect number.", userinput);
    }
    else {
        printf("%lld is not a Perfect number.", userinput);
    }
    
    return 0;
}