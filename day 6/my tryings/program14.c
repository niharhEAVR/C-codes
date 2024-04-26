// Write a program to input the angles of a triangle and check whether a triangle is valid or not.
#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter the Three angle of a triangle:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if((a1+a2+a3)==180){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is invalid.");
    }
}