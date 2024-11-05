// Write a program to check whether you are eligible to make a Voter Card or not
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your Age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are Eligible for Voter card");
    }
    else{
        printf("You are not Eligible for Voter card.");
    }
    return 0;
}