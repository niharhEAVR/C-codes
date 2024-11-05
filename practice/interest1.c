#include<stdio.h>
#include<string.h>
#include<math.h>
int simpleCompound(int);
int timeSet(int);
int main()
{
    char choice;
    printf("Type 'S' for simple interest and 'C' for compound interest: ");
    scanf("%c",&choice);
    simpleCompound(choice);
    return 0;
}
int simpleCompound(int c)
{
    float principle, rateOfInterest;
    char choice;
    int time;
    switch(c){
        case 'S':           
            printf("Enter your Principle anount: ");
            scanf("%f",&principle);
            fflush(stdin);
            printf("Type 'Y' for year,'M' for month,'D' for day: ");
            scanf("%c",&choice);
            time = timeSet(choice);
            fflush(stdin);
            printf("Enter the Rate of interest: ");
            scanf("%f",&rateOfInterest);
            float simpleInterest = (principle*time*rateOfInterest)/100;
            printf("The Simple Interest is %.2f",simpleInterest);
        break;
        case 'C':
            printf("Enter your Principle anount: ");
            scanf("%f",&principle);
            fflush(stdin);
            printf("Type 'Y' for year,'M' for month,'D' for day: ");
            scanf("%c",&choice);
            time = timeSet(choice);
            fflush(stdin);
            printf("Enter the Rate of interest: ");
            scanf("%f",&rateOfInterest);
            float compoundInterest = principle * pow((1+(rateOfInterest/100)),time);
            printf("The Compound Interest is %.2f",compoundInterest);
        break;
    }
    
}
int timeSet(int c)
{
    int year; 
    int month;
    int day;
    switch(c){
        case 'Y':
            printf("Enter total years: ");
            scanf("%d",&year);
            return year;
        break;
        case 'M':           
            printf("Enter total Months: ");
            scanf("%d",&month);
            month /= 12;
            return month;
        break;
        case 'D':          
            printf("Enter total Days: ");
            scanf("%d",&day);
            day /= 365;
            return day;
        break;
    }
}