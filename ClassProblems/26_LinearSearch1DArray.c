// 26. Write a program to search an element in an array.

#include <stdio.h>
int main() {
    
    int user_input, i, arr[5] = {10, 7, 8, 4, 21};
    
    printf("Enter value to search: ");
    scanf("%d", &user_input);

    for (i = 0; i < 5; i++)
    {
        if(arr[i]==user_input){
            printf("%d found at %d location of the array.", user_input, i);
            break;
        }
    }

    if(i==5){
        printf("%d not found in the array.", user_input);
    }
    
    return 0;
}