/*05. Write a program to calculate electricity bill based on the given criteria:
 Units ---------------- Rates
 First 200  ----------  4.50/unit
 201 - 500  ----------  5.50/unit
 501 - 1000 ----------  7.00/unit
 Above 1000 ----------  8.00/unit*/

#include <stdio.h>
int main()
{
    int units;
    float bill;
    
    printf("Enter monthly units: ");
    scanf("%d", &units);

    if (units <= 200)
        bill = units * 4.50;
    else if (units <= 500)
        bill = ((units - 200) * 5.50) + 900;
    else if (units <= 1000)
        bill = ((units - 500) * 7.00) + 900 + 1650;
    else
        bill = ((units - 1000) * 8.00) + 900 + 1650 + 3500;

    printf("The Total bill is %.2f", bill);

    return 0;
}