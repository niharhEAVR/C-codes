// a  
// a  b  
// a  b  c  
// a  b  c  d  
// a  b  c  d  e
#include<stdio.h>
int main()
{
    int i,j;
    int n;

    printf("Enter your pattern number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c  ",96+j );
        }
        printf("\n");
    }
    return 0;
}