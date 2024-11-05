/* Write a program to find the eligibility for admission 
    to a professional course base on the following criteria:
     Marks in MATHS >= 65 
     Marks in PHY >= 55 
     Marks in CHEM >= 50 
     Total in all three subjects => 180 
    Or, 
    Total in Math and physics >=140. 
*/
#include<stdio.h>
int main()
{
    float m,p,c,t,mp;
    printf("Enter marks of math,physics,chemistry:\n");
    scanf("%f%f%f",&m,&p,&c);
    t=m+p+c;
    mp=m+p;
    if (m>=65 && p>=55 && c>=50){
        if(t>=180 || mp>=140){
            printf("Congratulation you are eligible for admission.");
        }else{
            printf("You are not eligible for admission.");
        }
    }
    
    else{
        printf("You are not eligible for admission.");
    }
    return 0;
}