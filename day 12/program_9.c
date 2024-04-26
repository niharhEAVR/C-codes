/*
    1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n = ? 
    Test Data: 
    Input the number of terms: 5 
    Expected Output: 
    1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 
    Sum of Series up to 5 terms: 2.28333
*/
#include<stdio.h>
int main()
{
    double i,n,sum=0.0;
    printf("Enter the value of n:");
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {   
        if(i==n){
            printf("1/%.lf",i);
        } else{
           printf("1/%.lf + ",i); 
        }
        sum += (1.0/i);
    }
    printf("\nThe sum is:%lf",sum);


    return 0;
}