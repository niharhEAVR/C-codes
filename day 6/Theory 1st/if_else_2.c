#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    /*
    2> if else - syntax
        if(condition)
        {
            body of if
        }
        else
        {
            body of else
        }
    */
    if(num<0)
    {
        printf("This is a negetive number");
    }
    else
    {
        printf("This is a positive number");
        
    }

    return 0;
    
}