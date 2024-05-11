#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Integer: ");
    scanf("%d",&num);
    int multipleOfTen = 0;
    while(num!=0){
        if(num>10){
            multipleOfTen += (num % 10);
            multipleOfTen *= 10;
            num /= 10;
        }else{
        multipleOfTen += (num % 10);
        num /= 10;
        }
    }
    printf("The reverse is: %d",multipleOfTen);
    return 0;
}