#include<stdio.h>
// Direct Recursions
int fun(int x)
{
    if(x==1){
        return 1;
    }else{
        return x*fun(x-1);
    }
}
int main()
{
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    r=fun(n);
    printf("\nThe factorial value of %d is %d",n,r);
    return 0;
} 