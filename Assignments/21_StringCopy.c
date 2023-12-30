// C Program to Copy String Without Using strcpy()

#include <stdio.h>
#include<string.h>
int main() {
    void xstrcpy(char*, char*);
    char str[50] = "West Bengal";
    char str1[50];
    xstrcpy(str, str1);
    printf("\nThe copied string is %s", str1);
    return 0;
}

void xstrcpy(char st[], char st1[]){
    int i; 
    for (i = 0; st[i]!='\0'; i++)
        st1[i] = st[i];
    st1[i]='\0';
    
}