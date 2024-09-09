// Print the series: 3,34,343,3434,34343,……. up to n number of terms.

#include <stdio.h>
int main() {
    int var1 = 3, var2 = 4, i, n;
    long long int term = 0; 

    printf("Enter the nth term: ");
    scanf("%d", &n);

    for (i = 0; i <n; i++)
    {
        if (i%2==0)
        {
            term = term * 10 + var1;
        }
        else
        {
            term = term * 10 + var2;
        }
        printf("%lld  ", term);
    }

    return 0;
}