#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    int max = (num1>num2) ? (max = (num1>num3) ? num1 : num3) : num3;
    max = (num2>num3) ? num2 : num3;
    printf("The maximum in three numbers is:%d",max);
    return 0;
}