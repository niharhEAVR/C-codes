// Write a program to check the uppercase or lowercase alphabet. 
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet: ");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("The alphabet %c is lowercase.",c);
    }
    else{
        printf("The alphabet %c is uppercase.",c);
    }
    return 0;
}