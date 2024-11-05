// Write a program to check whether a number is posiƟve, negaƟve, or zero using a 
// switch case.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n > 0) 
    {
        case 1:
            printf("The number is positive.\n");
            break;
        case 0:
            switch(n < 0) {
                case 1:
                    printf("The number is negative.\n");
                    break;
                default:
                    printf("The number is zero.\n");
            }
            break;
    }
    return 0;
}