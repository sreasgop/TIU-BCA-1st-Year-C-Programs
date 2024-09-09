// 07. Write a program to make a simple calculator using switch case. 

#include<stdio.h>
int main(){
    int num1, num2; 
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+,-,*,/) :");
    scanf(" %c",&operator);
    switch (operator)
    {
    case '+':
        printf("The result is %d", num1 + num2);
        break;
    case '-':
        printf("The result is %d", num1 - num2);
        break;
    case '*':
        printf("The result is %d", num1 * num2);
        break;
    case '/':
        printf("The result is %.2f",  ( (float) num1 / (float) num2));
        break;
    default:
        printf("Invalid Operator!");
        break;
    }

    return 0;
}