// 23. Write a program to print the following pattern:
//  1
//  22
//  333
//  4444

#include<stdio.h>
int main() {
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}