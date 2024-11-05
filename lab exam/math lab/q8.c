#include<stdio.h>
int main()
{
    int base,height,area;
    printf("Enter the Base of the triangle: ");
    scanf("%d",&base);
    printf("Enter the Height of the triangle: ");
    scanf("%d",&height);
    area = base*height/2;
    printf("The area of the Tringle is: %d",area);
    return 0;
}