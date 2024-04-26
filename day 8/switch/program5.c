// Write a program to check whether a number is even or odd using a switch case. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n%2==0){
        case 0:
        printf("The numbers %d is ODD.",n);
        break;
        default:
        printf("The number %d is EVEN.",n);
    }
    return 0;
}