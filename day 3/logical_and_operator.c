#include<stdio.h>
int main()
// day 3
{   
    // 6.1) Operetor in C -- (logical operator)
    /*
        2.4.1)logical AND operator
        2.4.2)logical OR operator
        2.4.3)logical NOT operator

        logiacl AND (symbol = && )
        syntax = operand1 && operand2
        case 1 - T && T = T
        case 2 - T && F = F
        case 3 - F && T = F
        case 4 - F && F = F

        logiacl OR (symbol = || )
        syntax = operand1 || operand2
        case 1 - T || T = T
        case 2 - T || F = T
        case 3 - F || T = T
        case 4 - F || F = F
        
        logiacl NOT (symbol = ! )
        syntax = !(operand1)
        case 1 - T = F
        case 1 - F = T
    */

    
    //logical AND
    int a=10;
    int b=30;
    int result= (a!=b) && (a<b);
    printf("%d",result);
    
    return 0;
}