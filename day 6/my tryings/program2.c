//Write a program to find the maximum between three numbers. 
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2){
        if(n1>n3){
            printf("%d aka n1 is the largest number.",n1);
        } else{
            printf("%d aka n3 is the largest number.",n3);
        }
    } else{
        if (n2>n3)
        {
            printf("%d aka n2 is the largest number.",n2);
        }else{
            printf("%d aka n3 is the largest number.",n3);
        }
        
    }
    return 0;
}