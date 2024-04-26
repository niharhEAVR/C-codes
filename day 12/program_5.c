// 2 + 4 + 6 + ……… + N = ? 
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   
        
        //sum of odd no.
        if(i%2==0){
            printf("%d + ",i);
            sum += i;
        }
    }
    printf("\nThe sum is:%d",sum);


    return 0;
}