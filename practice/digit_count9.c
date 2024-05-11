#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the Integer: ");
    scanf("%d",&num);
    int temp = num;
    while(num!=0){
        num /=10;
        count++;
    }
    printf("%d has %d digits",temp,count);
    return 0;
}