// Write a program to input the month number and print the number of days in that month. 
#include<stdio.h>
int main()
{
    int m,y;
    printf("Enter The year: ");
    scanf("%d",&y);
    printf("Enter The month number: ");
    scanf("%d",&m);
    // if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
    //     printf("This month have 31 days.");
    // }
    if (m==1){
        printf("This month have 31 days. And its January");
    } 
    else if(m==3){
        printf("This month have 31 days. And its  March");
    }
    else if(m==5){
        printf("This month have 31 days. And its  May");
    }
    else if(m==7){
        printf("This month have 31 days. And its  July");
    }
    else if(m==8){
        printf("This month have 31 days. And its  August");
    }
    else if(m==10){
        printf("This month have 31 days. And its  October");
    }
    else if(m==12){
        printf("This month have 31 days. And its  December");
    }
    // else if(m==4||m==6||m==9||m==11){
    //     printf("This month have 30 days.");
    // }
    else if(m==4){
        printf("This month have 30 days. And its  April");
    }
    else if(m==6){
        printf("This month have 30 days. And its  Jun");
    }
    else if(m==9){
        printf("This month have 30 days. And its  September");
    }
    else if(m==11){
        printf("This month have 30 days. And its  November");
    }
    else if(y%4==0)
    {
        if(m==2){
            printf("This month have 29 days. Because this month is in leap year and its February");
        }
        else{
        printf("Invalid month number! put your month number b/w 1-12");
        }
    }
    else if(m==2){
        printf("This month have 28 days. And its February");
    }
    else{
        printf("Invalid month number! put your month number b/w 1-12");
    }
    return 0;
}