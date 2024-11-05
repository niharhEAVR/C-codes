// Write a program to enter the week number and print the day of the week. 
#include<stdio.h>
int main()
{
    int wn;
    printf("enter day number of the week:");
    scanf("%d",&wn);
    if(wn==1){
        printf("The day number of the week is monday.");
    } 
    else if(wn==2){
        printf("The day number of the week is tuesday.");
    }
    else if(wn==3){
        printf("The day number of the week is wednesday.");
    }
    else if(wn==4){
        printf("The day number of the week is thursday.");
    }
    else if(wn==5){
        printf("The day number of the week is friday.");
    }
    else if(wn==6){
        printf("The day number of the week is saturday.");
    }
    else if(wn==7){
        printf("The day number of the week is sunday.");
    }
    else{
        printf("Invalid number! Enter week number b/w 1-7.");
    }
    return 0;
}