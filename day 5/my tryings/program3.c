// WAP in C to calculate the area of triangle
#include<stdio.h>
int main()
{   
    float h,b,area;
    printf("Enter the Height of the triangle:");
    scanf("%f",&h);
    printf("Enter the Base of the triangle:");
    scanf("%f",&b);

    area = (((h*b)*1)/2);
    printf("The Area of the triangle is:%.2f",area);
    return 0;
}