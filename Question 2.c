#include <stdio.h>

int main(){

    char ch;
    printf("Enter the Character:   ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Character is VOWEL");
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Character is VOWEL");
    }

    else
    {
        printf("Character is CONSONANT"); 
    }

    return 0; 
}

