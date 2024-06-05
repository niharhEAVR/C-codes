// Write a program to input any character and check whether it is the alphabet, digit, or special character.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%s",&ch);
    // if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    //     printf("The character is alphabet.");
    // }
    if(isalpha(ch)){
        printf("The character is alphabet.");
    }
    // else if(character >= '0' && character <= '9'){
    //     printf("The %c is a Digit.",character);
    // }
    else if(isdigit(ch)){
        printf("The character is digit.");
    }
    else{
        printf("The character is special character.");
    }
    return 0;
}