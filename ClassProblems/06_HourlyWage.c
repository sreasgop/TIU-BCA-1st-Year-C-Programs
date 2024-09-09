/*06. Write a program to calcualte wage of a labor according to the following criterias: 
 Work Hours --------------------- Wage
 First 8 Hours  ----------------  100/hr
 Next 2 Hours   ----------------  150/hr
 Next 2 Hours   ----------------  200/hr
 Above 12 Hours ----------------  300/hr
*/

#include <stdio.h>
int main() {
    int hours_Worked, wage;
    
    printf("\nEnter the number of hours worked: ");
    scanf("%d", &hours_Worked);

    if (hours_Worked<=8)
        wage = hours_Worked * 100;
    else if (hours_Worked<=10) 
        wage = (hours_Worked - 8) * 150 + 800;
    else if (hours_Worked<=12)
        wage = (hours_Worked - 10) * 200 + 800 + 300;
    else
        wage = (hours_Worked - 12) * 300 + 800 + 300 + 400;

    printf("The total wage is: %d\n", wage);

    return 0;
}