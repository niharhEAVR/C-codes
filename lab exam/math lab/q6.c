#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer: ");
    scanf("%d",&num);
    int facto=1;
    for(int i=1;i<=num;i++){
        facto *= i;
    }
    printf("The Factorial of %d is: %d",num,facto);
    return 0;
}