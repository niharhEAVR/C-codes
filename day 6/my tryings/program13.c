// Write a program to check two integers whether they are equal or not. 
#include<stdio.h>
int main()
{
    float n1,n2;
    printf("Enter two integers:\n");
    scanf("%f%f",&n1,&n2);
    if(n1==n2)
    {
        printf("The two integers are Equal");
    }
    else{
        printf("The two integers are Not equal.");
    }
    return 0;
}