#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    int sum=0;
    for(int i=1; i<=num; i+=2){
        sum += i;
        printf("%d\n",i);
    }
    printf("Sum of odd numbers upto %d is: %d",num,sum);
    return 0;
}