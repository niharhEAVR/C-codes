//Write a program to find the maximum number between two numbers. 
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("%d aka num1 is the largest number.",num1);
    } else{
        printf("%d ka num2 is the largest numbers.",num2);
    }
    return 0;
}