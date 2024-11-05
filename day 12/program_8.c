// 1^2 + 2^2 + 3^2 + …………..+ n^2 = ?
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   
        if(i==n){
            printf("%d^2",i);
        } else{
           printf("%d^2 + ",i); 
        }
        sum += i*i;
    }
    printf("\nThe sum is:%d",sum);


    return 0;
}