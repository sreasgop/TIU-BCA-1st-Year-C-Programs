// C Program to Remove all Characters in a String Except Alphabet 

#include <stdio.h>
#include<ctype.h>

int main() {
    char string[100];
    int i, index;

    printf("\nEnter a string: ");
    gets(string);

    for( i = 0; string[i] != '\0'; i++) {
        if (!isalpha(string[i])){
            index = i;
            while (string[index]!='\0') {
                string[index] = string[ index + 1 ];
                index++;
            }
            i--;  
        }
    }

    printf("%s\n\n", string);
    return 0;
}


