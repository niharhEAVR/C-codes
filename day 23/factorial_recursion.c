#include<stdio.h>
// Direct Recursions
int facto(int x)
{
    if(x==1){
        return 1;
    }else{
        return x*facto(x-1);
    }
}
int main()
{
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    r=facto(n);
    printf("The factorial value of %d is %d",n,r);
    return 0;
} 