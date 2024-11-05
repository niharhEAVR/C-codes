// Write a program to find the maximum between two numbers using a switch case.
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    switch(n1>n2)
    {
        case 0: // 0 means false
        printf("The maximum number is %d",n2);
        break;
        default:
        printf("The maximum number is %d",n1);

    }
    return 0;
}