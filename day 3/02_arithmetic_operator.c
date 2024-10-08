#include<stdio.h>
int main()
// day 3
{   
    // 2)Operetor in C -- (arithmetic operator)
    /*
    addittion = (+)
    substraction = (-)
    division = (/)
    multliplication = (*)
    reminder = (%)
    */
    //input
    int num1;
    int num2;
    int r1,r2,r3,r4,r5;
    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    //operation
    r1 = num1 +  num2;

    // '=' , '+' is a operator
    // num1, num1 is operands
    // r1 is a result

    r2 = num1 -  num2;
    r3 = num1 /  num2;
    r4 = num1 *  num2;
    r5 = num1 %  num2;
    //output
    printf("the value is: %d\n", r1);
    printf("the value is: %d\n", r2);
    printf("the value is: %d\n", r3);
    printf("the value is: %d\n", r4);
    printf("the value is: %d", r5);
    
    return 0;
}