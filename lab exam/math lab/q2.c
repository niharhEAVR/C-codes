#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("The sum is:\n");
    int sum = a+b;
    printf("%d+%d=%d",a,b,sum);
    return 0;
}