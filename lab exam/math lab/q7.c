#include<stdio.h>
int main()
{
    int num;
    printf("Enter a positive interger: ");
    scanf("%d",&num);
    int sum=0,digit,temp=num;
    while(num!=0){
        digit = num%10;
        sum += digit;
        num /= 10;
    }
    printf("The sum of all digits of %d is: %d",temp,sum);
    return 0;
}