#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    /*
    syntax - else if ladder
        if(condition 1)
        {
            body of if
        }
        else if(condition 2)
        {
            body of else if 1
        }
        else if(condition 3)
        {
            body of else if 2
        }

        you can create this "if else" command as many times as you want but lastly you have to put the "else" statement

         else
        {
        when all the above condition is false
        }
    */
    if(num<0)
    {
        printf("This is a negetive number");
    }
    else if(num==0) 
    {
        printf("number is equal");
    }
    else if(num>=40) 
    {
        printf("number is greater than or equal-to 40");
    }
    else
    {
        printf("This is a positive number");
        
    }

    return 0;
    
}