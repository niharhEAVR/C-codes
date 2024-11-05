#include<stdio.h>
int swap(int);
int main()
{
    char choice;
    printf("1. Addition and Substraction Method\n2.Division and Multliplication Method\n");
    printf("Type choice number: ");
    scanf("%c",&choice);
    swap(choice);
    return 0;
}
int swap(int c){
    int num1,num2;
    switch(c){
        case '1':
            printf("Enter the num1: ");
            scanf("%d",&num1);
            printf("Enter the num2: ");
            scanf("%d",&num2);
            printf("Before swap num1 is:%d and num2 is:%d\n",num1 ,num2);
            num1 += num2;
            num2 = num1 - num2;
            num1 = num1 -num2;
            printf("After swap num1 is:%d and num2 is:%d",num1 ,num2);
        break;
        case '2':
            printf("Enter the num1: ");
            scanf("%d",&num1);
            printf("Enter the num2: ");
            scanf("%d",&num2);
            printf("Before swap num1 is:%d and num2 is:%d\n",num1 ,num2);
            num1 *= num2;
            num2 = num1 / num2;
            num1 = num1 / num2;
            printf("After swap num1 is:%d and num2 is:%d",num1 ,num2);
        break;
    }
}