//Write a program to check whether a number is negative or positive or zero. 
#include<stdio.h>
int main()
{
    float n;
    printf("Enter a Number: ");
    scanf("%f",&n);
    if(n>0)
    {
        printf("The number is positive.");
    } 
    else if(n==0)
    {
        printf("The number is Zero.");
    }
    else
    {
        printf("The number is Negative");
    }

    return 0;
}