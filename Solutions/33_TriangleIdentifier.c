// 33. Write the code to identify the type of triangle scalene isosceles  or equilateral
#include<stdio.h>
int main(){
    int first, second, third;
    printf("First angle of the triangle(Don't Enter unit): ");
    scanf("%d",&first);
    printf("Second angle of the triangle(Don't Enter unit): ");
    scanf("%d",&second);
    printf("Third angle of the triangle(Don't Enter unit): ");
    scanf("%d",&third);
    if ((first+second+third)==180)
    {
        if (first == second && second == third)
        {
            printf("Triange is equilateral!");
        }
        else if (first == second ||  first == third || second == third || third == second)
        {
            printf("Given trianlge is isosceles");
        }
        else{
            printf("Given triangle is scalene");
        }
        
        
    }
    else{
        printf("Not a triangle");
    }
    
    return 0;
}
