// Write a program to check whether a number is divisible by 5 or 11 or not. 
#include<stdio.h>
int main()
{   
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%11==0){
            printf("The number divisible by 5 and 11,");
        } else {
            printf("The number is divisible by 5 but not with 11.");
        }
    }
    else if(n%11==0)
    {
        if(n%5==0){
            printf("The number divisible by 5 and 11,");
        } else {
            printf("The number is divisible by 11 but not with 5.");
        }
    }
    else{
        printf("The number is not divisible by 5 and 11.");
    }
    return 0;
}