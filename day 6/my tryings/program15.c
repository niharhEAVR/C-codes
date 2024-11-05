// Write a program to check whether the triangle is an equilateral, isosceles, or scalene triangle.
#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter three angles of a triangle:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1==a2 && a1==a3 && a3==a2){
        printf("The triangle is equilateral triangle.");
    }
    else if(a2==a3 || a1==a3 || a1==a2){
        printf("The triangle is isosceles triangle.");
    }
    else{
        printf("The triangle is scalene triangle.");
    }
    return 0;
}