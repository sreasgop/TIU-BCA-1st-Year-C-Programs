// 02. Write a program to take marks as input from the user and based on their mark tell them whether they passed or failed (Minimum Passing mark is 40).

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks > 39)
        printf("You passed the exam!");
    else
        printf("You failed the exam.");
    return 0;
}