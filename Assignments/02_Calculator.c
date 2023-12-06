//  C Program to Make a Simple Calculator Using switch...case

#include<stdio.h>
int main() {
    int num1, num2; 
    char operator; 
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &operator);



    switch(operator){
        case '+':
            printf("Sum: %d\n", num1+num2);
            break;
        case '-':
            printf("Difference: %d\n", num1-num2);
            break;
        case '*':
            printf("Product: %d\n", num1*num2);
            break;
        case '/':
            printf("Quotient: %.2f\n", num1/(float)num2);
           break;
        default:
            printf("Invalid Operator: Operation not supported.\n");
    }

    return 0;
}