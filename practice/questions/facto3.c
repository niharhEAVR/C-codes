#include<stdio.h>
// 1st method
int facto(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result = facto(num);
    printf("The factorial of %d is: %d",num,result);
    return 0;
}
int facto(int x)
{
    if(x==1){
        return 1;
    }else{
        return x*facto(x-1);
    }
}

/*  2nd method
int main()
{
    int num,result=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=num;i>=1;i--){
        result *=i;
    }
    printf("The factorial of %d is: %d",num,result);
    return 0;
}
*/