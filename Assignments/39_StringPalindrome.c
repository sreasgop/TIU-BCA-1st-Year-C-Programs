// Write a program to check whether a given string is a “palindrome” or not. E.g. MADAM is an example of palindrome.

#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    
    int i, j, length, is_palindrome = 1;
    char str1[100], str2[100];

    printf("\nEnter a string: ");
    gets(str1);

    length = strlen(str1);

    for(i=length-1, j=0; i>=0; i--, j++){
        str2[j] = tolower(str1[i]);
    }
    str2[j] = '\0';


    for(i=0; i<length; i++){
        if(tolower(str1[i])!=str2[i]){
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome==1){
        printf("Palindrome.\n\n");
    } else{
        printf("Not Palindrome.\n\n");
    }

    return 0;
}