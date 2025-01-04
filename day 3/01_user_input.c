#include<stdio.h>
int main()
// day 3
{
    // 1)User INPUT

    int num1;
    printf("Enter any integer value: ");
    scanf("%d",&num1); // &variable: The address of the variable where the input value will be stored. The & (address-of) operator is used to pass the memory address of the variable to scanf.
    printf("The value is: %d",num1);
    
    return 0;
}