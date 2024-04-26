#include<stdio.h>
#include<string.h>
int main()
{  

    /*gets() & puts()*/
    char h[100], h1[100];
    puts("Enter your first name: ");
    gets(h);
    puts("Enter your last name: ");
    gets(h1);
    printf("Name = %s %s",h,h1);
    
    return 0;
}