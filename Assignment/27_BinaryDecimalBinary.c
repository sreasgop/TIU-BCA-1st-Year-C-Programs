// C Program to Convert Binary Number to Decimal and vice-versa 


#include <stdio.h>
#include<ctype.h>
#include<math.h>

int BinaryToDecimal(void);
int DecimalToBinary(void);


int main() {
    char user_input;

    printf("\nMENU:\n==========\n1.Press 'B' to convert Binary Number to Decimal.\n2.Press 'D' to convert Decimal to Binary.\n\nInput: ");
    scanf("%c", &user_input);
    
    user_input = toupper(user_input);

    if(user_input=='B'){
        printf("Decimal: %d\n\n", BinaryToDecimal());
    } else if (user_input=='D') {
        printf("Binary: %d\n\n", DecimalToBinary()); 
    } else{
        printf("\nInvalid Input!\n\n");
    }
    
    return 0;
}


int BinaryToDecimal(void){
    int num, unit_digit, decimal=0, i=1; 

    printf("\nEnter any binary number: ");
    scanf("%d", &num);

    while (num!=0){
        unit_digit = num % 10;
        decimal += (unit_digit*i);
        num /= 10;
        i*=2;
    }

    return decimal;
}


int DecimalToBinary(void){
    int num, remainder, binary = 0, i=0;
    
    printf("\nEnter any decimal number: ");
    scanf("%d", &num);


    while(num != 0){
        remainder = num % 2;
        binary += remainder*pow(10, i);
        num = num/2;
        i++;
    }

    return binary;

}