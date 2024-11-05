// Write a program to check whether the year is a leap year or not. 
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("The year %d is leap year.",year);
    }
    else{
        printf("The year %d is not leap year.",year);
    }
    return 0;
}