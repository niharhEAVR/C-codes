#include<stdio.h>
#include<math.h>
int main()
//problem 1
{
    double length, width, a , b, c, s, rectangularArea, triangleArea, totalArea;

    printf("Enter the length of rectangle area: \n");
    scanf("%lf", &length);
    printf("Enter the widht of rectangle area: \n");
    scanf("%lf", &width);

    rectangularArea = (length*width);

    printf("Enter the three side of the Triangle Area: \n");
    scanf("%lf%lf%lf",&a,&b,&c);

    s=(a+b+c)/2;
    triangleArea = sqrt(s*(s-a)*(s-b)*(s-c));

    totalArea = rectangularArea + triangleArea;
    printf("The total area of Makaut campus is: %.2lf",totalArea);

    return 0;
}