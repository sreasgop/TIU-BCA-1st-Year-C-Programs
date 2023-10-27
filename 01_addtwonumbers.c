// 01. Write a program to add two numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("The summation is : %d\n", c);
    getch();
    return 0;
}
