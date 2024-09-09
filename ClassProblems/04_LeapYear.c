// 04. Write a program to take a year as an input from the user and print whether that year is a leap year or not.

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year%100!=0 && year%4==0 || year%400==0)
        printf("This is a leap year!");
    else
        printf("This is not a leap year.");
    return 0;
}