// 03. Write a program to take a number as input and tell if the entered number is even or odd.

#include <stdio.h>
int main() {
    int num;
    printf("\nEnther a number: ");
    scanf("%d", &num);
    if (num%2==0)
        printf("The entered number is even.");
    else
        printf("The entered number is odd.");
    return 0;
}