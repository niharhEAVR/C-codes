// Write a program to print the day of 
//  the week name using a switch case. 
#include<stdio.h>
int main()
{
    int wn;
    printf("Enter the week number:");
    scanf("%d",&wn);
    switch(wn)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid week number! - enter week number b/w 1-7");
    }
    return 0;
}