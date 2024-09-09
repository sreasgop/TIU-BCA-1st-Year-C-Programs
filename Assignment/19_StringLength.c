// C Program to Find the Length of a String

#include <stdio.h>
int main() {
    char string[100];
    int i; 

    printf("\nEnter a string: ");
    gets(string);

    for(i=0; string[i]!='\0'; i++);

    printf("Length: %d\n\n", i);

    return 0;
}