#include<stdio.h>
int main()
{
    int a,sum=0;
    for(int i=1;i<=5;i++){
        printf("Enter the value of a: ");
        scanf("%d",&a);
        if(a<0){
            continue;
        }else{
            sum += a;
        }
    }
    printf("The value of sum: %d",sum);
    return 0;
}