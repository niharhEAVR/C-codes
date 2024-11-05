// Write a program to check whether an alphabet is a vowel or consonant using a 
// switch case. 
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.", c);
            break;
        default:
        printf("%c is a consonant.",c);
    }
    return 0;
}