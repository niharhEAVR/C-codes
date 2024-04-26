//Program to check palindrome character using string
// ex. madam = madam
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i, length;
    int flag = 0; //check string palindrome or not

    puts("Enter a string: ");
    gets(s); //madam

    length = strlen(s); //5

    for(i=0;i < length ;i++)
    {
        if(s[i] != s[length-i-1])
        {
            flag = 1; //not a palindrome
            break; //exit from loop
        }
    }

    if (flag) // if flag 1 not a palindrome
    {
        printf("%s is not a palindrome", s);
    }    
    else 
    {
        printf("%s is a palindrome", s);
    }
    return 0;
}