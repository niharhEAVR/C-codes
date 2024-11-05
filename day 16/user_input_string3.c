#include<stdio.h>
int main()
{   

    /*user input*/
    char input[100];
    printf("Enter your name: ");
    scanf("%[^\n]s",input);
    printf("My name is: %s",input);

    return 0;
}