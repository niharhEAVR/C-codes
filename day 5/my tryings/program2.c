// WAP in C to enter length and breadth of a rectangle and calculate the peremeter.
#include<stdio.h>
int main()
{   
    float l,b,pm;
    printf("Enter the Length of the rectangle:");
    scanf("%f",&l);
    printf("Enter the Breadth of the rectangle:");
    scanf("%f",&b);

    pm = 2 * (l + b);
    printf("\nThe peremeter of the rectangle is:%.2f",pm);
    return 0;
}