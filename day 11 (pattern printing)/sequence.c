#include<stdio.h>
int main()
{
    int i,j,k=1;
    int n;

    printf("Enter your pattern number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {   
            if((i+j)<=n){
                printf("  ");
            }else {
                printf(" %d",k++);
            }
        }
        printf("\n");
    }
    return 0;
}