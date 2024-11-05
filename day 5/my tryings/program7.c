// WAP in C to enter the temperature in fahrenheit to convert it into celcius
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the Tenperature in Fahrenheit:");
    scanf("%f",&f);
    c = (((f-32)*5)/9);
    printf("The Tenperature in Celcius is:%.2f",c);
    return 0;
}