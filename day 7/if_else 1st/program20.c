/*
    Write a C program to input electricity unit charges and 
    calculate the total electricity bill according to the given condition: 
     For the first 50 units Rs. 0.50/unit 
     For the next 100 units Rs. 0.75/unit 
     For the next 100 units Rs. 1.20/unit 
     For units above 250 Rs. 1.50/unit 
     An additional surcharge of 20% is added to the bill. 
*/
#include<stdio.h>
int main()
{
    int a;//a is unit rs
    float b;//b is a bill amount
    float sc;//sub charge
    float tb;//total bill amount
    float tax;//tax amount (hw)

    printf("Enter the units: ");
    scanf("%d",&a);

    if(a>=1 && a<=50){
        b = a*0.50;
        printf("Your Basic bill is: %.2f",b);
    }else if(a>=50 && a<=150){
        b = 50*0.50 + (a-50)*0.75 ;
        printf("Your Basic bill is: %.2f",b);
    }else if(a>=150 && a<=250){
        b = (50*0.50) + (100*0.75) + (a-150)*1.20;
        printf("Your Basic bill is: %.2f",b);
    }
    else if (a>=250){
        b = 50*0.50 + 100*0.75 + 100*1.20 + (a-250)*1.50;
        printf("Your Basic bill is: %.2f",b);
    }
    else{
        printf("Enter correct units.");
    }
    sc = b*0.2; //sub charge added in the bill amount (20%)
    tb = b+sc;
    printf("\nSub charge of electricity bill is: %.2f\n",sc);
    printf("The total electricity(sub chgarge + basic bill) bill is: %.2f",tb);

    if(tb <= 400)
    {
        printf("\nNo Tax Required.");
    } else if(tb <= 600)
    {
        tax = (tb-400)*0.2;
        printf("\nYour Tax Will be: %.2f",tax);
        printf("\nAfter tax your bill stands: %.2f",(tb+=tax));
    } else
    {
        tax = (tb-600)*0.25 + 200*0.2;
        printf("\nYour Tax Will be: %.2f",tax);
        printf("\nAfter tax your bill stands: %.2f",(tb+=tax));
    }
    return 0;
}