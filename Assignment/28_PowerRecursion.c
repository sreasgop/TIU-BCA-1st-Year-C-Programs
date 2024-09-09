// C program to calculate the power using recursion

#include <stdio.h>

int power(int num, int pow);

int main() {
    int n, p;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the power: ");
    scanf("%d", &p);
    
    printf("%d", power(n, p));

    return 0;
}

int power(int num, int pow){
    if(pow!=0)
        return (num * power(num, pow-1));
    else
        return 1;
}