// C Program to Create Pyramid Structure
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>
int main() {
    int rows = 5, i, j, k, l;
    for ( i = 1; i <= rows; i++)
    {   
        for(k=rows; k>i; k--){
            printf(" ");
        }
        for ( j = 1; j <=i ; j++)
        {

            printf("*");            
        }
        
        for ( l = j-2; l > 0 ; l--)
        {
            printf("*");   
        }
        
        printf("\n");
        
    }
    
    return 0;
}