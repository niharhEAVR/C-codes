/* Write a program to read the temperature in centigrade and display a 
    suitable message according to the temperature state below: 
     Temp < 0 then Freezing weather 
     Temp 0-10 then very cold weather 
     Temp 10-20 then cold weather 
     Temp 20-30 then Normal in Temp 
     Temp 30-40 then it’s hot 
     Temp >=40 then it’s very hot. 
*/
#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the Temperature in Celcius or Centigrade:\n");
    scanf("%d",&temp);
    if(temp<0){
        printf("then Freezing weather.");
    }
    else if(temp>=0 && temp<=10){
        printf("then very cold weather .");
    }
    else if(temp>=10 && temp<=20){
        printf("then cold weather.");
    }
    else if(temp>=20 && temp<=30){
        printf("then Normal in Temp.");
    }
    else if(temp>=30 && temp<=40){
        printf("then it's hot.");
    }
    else{
        printf("then it's very hot.");
    }
    return 0;
}