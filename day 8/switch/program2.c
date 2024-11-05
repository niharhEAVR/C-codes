//Write a program to print the total number of days in a month using a switch case
#include<stdio.h>
int main()
{
    int mn,y;
    printf("Enter the year: ");
    scanf("%d",&y);
    int flag = (y%4==0) ? 0 : 1;
    
    printf("1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December\n");
    printf("Enter your choice: ");
    scanf("%d",&mn);
    switch(mn)
    {
        case 1:
        printf("January have 31 days.");
        break;
        case 2:
            switch (flag)
            {
            case 1:
            printf("The February month have 28 days.");
            break;
            default:
            printf("The February month have 29 days.");
            }
        break;
        case 3:
        printf("March have 31 days.");
        break;
        case 4:
        printf("April have 30 days.");
        break;
        case 5:
        printf("May have 31 days.");
        break;
        case 6:
        printf("June have 30 days.");
        break;
        case 7:
        printf("July have 31 days.");
        break;
        case 8:
        printf("August have 31 days.");
        break;
        case 9:
        printf("September have 30 days.");
        break;
        case 10:
        printf("October have 31 days.");
        break;
        case 11:
        printf("November have 30 days.");
        break;
        case 12:
        printf("December have 31 days.");
        break;
        default:
        printf("Invalid month number! - enter your month number b/w 1-12");
    }
    return 0;
}