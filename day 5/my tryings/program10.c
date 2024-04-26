// WAP in C to enter two angles of a triangle and find out the third angle
#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter the two angles:\n");
    scanf("%d%d",&a1,&a2);
    a3 = 180 - (a1+a2);
    printf("The third angle of the triangle is:%d",a3);
    return 0;
}