// C program to count the number of vowels & consonants

#include <stdio.h>
#include<ctype.h>

int main() {
    char string[100], temp;
    int vowel_count, consonant_count, i;

    printf("\nEnter a string: ");
    gets(string);

    for(i=0; string[i]!='\0'; i++){
        temp = tolower(string[i]);
        if(isalpha(temp)){
            if(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u'){
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

    printf("Vowel Count: %d\n", vowel_count);
    printf("Consonant Count: %d\n\n", consonant_count);

    return 0;
}