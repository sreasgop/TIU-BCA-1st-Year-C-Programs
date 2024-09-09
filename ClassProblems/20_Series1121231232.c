// 20. Write a program to print 1, 12, 123, 1232, 12323........
#include <stdio.h>
int main() {
    int var1 = 2, var2 = 3, i, n;
    long long int term = 1; 

    printf("Enter the nth term: ");
    scanf("%d", &n);

    for (i = 0; i <=n; i++)
    {
        printf("%lld    ", term);
        if (i%2==0)
        {
            term = term * 10 + var1;
        }
        else
        {
            term = term * 10 + var2;
        }
    }

    return 0;
}