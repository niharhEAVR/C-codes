// WAP to check whether the character is vowel or consonant 
#include<stdio.h>
int main()
{
    char c;
    printf("Enter your alphabet: ");
    scanf("%c",&c);
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("The %c is a vowel.",c);
    }
    else{
        printf("The %c is a consonent.",c);
    }
    return 0;
}