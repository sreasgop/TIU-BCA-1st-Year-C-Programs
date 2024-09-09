// Write a program concatenate two inputted strings without using strcat().

#include <stdio.h>
#include<string.h>
int main() {
    void xstrcat(char*, char*);
    char str[50] = "West Bengal";
    char str1[50] = "TIU";
    xstrcat(str, str1);
    printf("\nThe Concatenated string is :%s", str1);
    return 0;
}

void xstrcat(char st[], char st1[]){
    int i, j; 
    j = strlen(st1);
    for ( i = 0; st[i]!='\0'; i++)
        st1[j++] = st[i];
    st1[j]='\0';
    
}