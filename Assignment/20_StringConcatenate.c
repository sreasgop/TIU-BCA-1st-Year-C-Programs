// C Program to Concatenate Two Strings 

#include <stdio.h>
#include<string.h>
int main() {
    void xstrcat(char*, char*);
    char str[50] = "West Bengal";
    char str1[50] = "TIU";
    xstrcat(str, str1);
    printf("\nThe Concatenated string is : %s\n\n", str);
    return 0;
}

void xstrcat(char st[], char st1[]) {
    int i, j; 
    j = strlen(st);
    for ( i = 0; st1[i]!='\0'; i++)
        st[j++] = st1[i];
    st[j]='\0';
    
}