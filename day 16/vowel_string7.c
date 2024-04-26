//Program to count the no. of vowel in a string
/*
    india =  i + i + a = 3
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i=0; // 0 1 2 3 4
    int len, count=0;
    puts("Enter a string: ");
    gets(s);

    len = strlen(s);

    while(i<len){
        //vowel logic
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        {
            count++;
        }
        i++;
    }

    // you can do the while loop with for loop . same concept
    /*for(int i=0;i<=len;i++)
    {
         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
    }*/ 

    printf("%d",count);
    return 0;
}