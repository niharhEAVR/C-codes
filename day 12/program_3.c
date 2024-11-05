//  1 + 2 + 3 + 4 + 5 + …… + N = ?
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   
        //print the series
        if(i==n){
            printf("%d",i);
        } else{
            printf("%d + ",i);
        }
        sum = sum+i;
    }

        //sum=(n*(n+1))/2; formula

    printf("\nThe sum is:%d",sum);


    return 0;
}