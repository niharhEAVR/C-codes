// WAP in C to calculate are of a Equilateral triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float a,area;
    printf("Enter the side of the equilateral triangle:");
    scanf("%f",&a);
    area = ((sqrt(3)*(pow(a,2)))/4);
    printf("The area of the equilateral triangle is:%.2f",area);
    return 0; 
}