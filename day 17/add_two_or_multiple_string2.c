//program to concatenate two strings

#include<stdio.h>
#include<string.h>
int main()
{
    
    char s1[30],s2[30];
    int l1,l2;
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);

    // using string function
    /*  
    strcat(s1,s2);
    printf("string = %s",s1); 
    */

    //MANUALLY 
    l1=strlen(s1); 
    l2=strlen(s2);
    
    for(int i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("%s",s1); 

    
    return 0;
}