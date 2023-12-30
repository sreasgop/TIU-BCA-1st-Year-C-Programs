// C Program to Find the Frequency of Characters in a String 

#include <stdio.h>
int main() {
    
    char string[100], character;
    int count=0, i;

    printf("\nEnter a string: ");
    gets(string);

    printf("Enter character: ");
    scanf("%c", &character);

    for(i=0; string[i]!='\0'; i++){
        if(string[i]==character){
            count++;
        }
    }

    printf("\nFrequency of character '%c': %d\n\n", character, count);

    return 0;
}