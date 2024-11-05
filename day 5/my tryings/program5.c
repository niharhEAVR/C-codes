//WAP in C to find area, diameter, radius and circumference of a circle
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{   
    float r,d,a,c;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    a = pi*(pow(r,2));
    d = 2*r;
    c = (2*pi*r);
    printf("The radius of the circle is:%.2f\n",r);
    printf("The diameter of the circle is:%.2f\n",d);
    printf("The area of the circle is:%.2f\n",a);
    printf("The circumference of the circle is:%.2f",c);
    return 0;
}