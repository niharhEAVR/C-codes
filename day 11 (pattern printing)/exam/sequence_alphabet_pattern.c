#include<stdio.h>
int main()
{
    int i,j,ch=1;
    int n;

    printf("Enter your pattern number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c  ",64+ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
