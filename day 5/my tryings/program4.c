// WAP in C to calculate the area of a triangle by using "Heron's" formula
#include<stdio.h>
#include<math.h>
int main()
{   
    float a,b,c,s,area;
    printf("Enter the three side's of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    s = ((a+b+c)/2);
    area = (sqrt(s*((s-a)*(s-b)*(s-c))));
    printf("The area of a triangle by using Heron's formula is:%.2f",area);
    return 0;
}