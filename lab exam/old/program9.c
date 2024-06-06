/* Write a program to input the basic salary of an employee and calculate its Gross 
salary according to the following:
     Basic Salary <= 10000 : HRA = 20%, DA = 80% 
     Basic Salary <= 20000 : HRA = 25%, DA = 90% 
     Basic Salary > 20000 : HRA = 30%, DA = 95%.
    GROSS SALARY = DA+HRA+BASIC SALARY
*/
#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("Enter your Basic Salary:\n");
    scanf("%f",&bs);
    if(bs>=1 && bs<=10000){
        hra = bs*0.2;
        da = bs*0.8;
        gs = hra+da+bs;
        printf("Your gross salary is: %.2f",gs);
    }
    else if(bs>=10000 && bs<=20000){
        hra = bs*0.25;
        da = bs*0.9;
        gs = hra+da+bs;
        printf("Your gross salary is: %.2f",gs);
    }
    else if(bs>20000){
        hra = bs*0.3;
        da = bs*0.95;
        gs = hra+da+bs;
        printf("Your gross salary is: %.2f",gs);
    }
    else {
        printf("Enter your basic salary in positive");
    }
    return 0;
}