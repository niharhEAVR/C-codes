#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    /*
        1> if - syntax
        if(condition)
        {
            //body of if
            //if condition is true then only if block executre
            //condition false program skip the if block
        }
    */
    if (num < 0) // true = execute , false = didnt execute only the value store
    {
        printf("This is a negetive number");
    }

    return 0;
}