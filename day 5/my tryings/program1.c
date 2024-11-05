// WAP in C to add two numbers and display the result.
#include<stdio.h>
int main()
{   
    int num1,num2,result;
    printf("Enter the Two numbers:\n");
    scanf("%d%d",&num1,&num2);

    result = num1 + num2;
    printf("\nThe result is:%d",result);
    return 0;
}