// WAP in C to enter the temperature into celcius and convert it into a fahrenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the Temperature in Celcius:");
    scanf("%f",&c);

    f = (((c*9)/5)+32);
    printf("The Temperature in Fanrenheit is:%.2f",f);
    return 0;
}