#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    static int count;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is prime number.",num);
    }else{
        printf("%d is not prime number.",num);
    }
    return 0;
}