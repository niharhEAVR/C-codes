#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the three integer numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    /*
    syntax - nested if else
        if()
        {
            if(){

            }else{

            }
        } else{
            if(){

            }else{

            }
        }
    */
    if(n1>n2)
    {
        if(n1>n3){
            printf("%d aka n1 is the largest number",n1);
        }else{
            printf("%d aka n3 is the largest number",n3);
        }
    }
    else
    {
        if(n2>n3){
            printf("%d aka n2 is the largest number",n2);
        }else{
            printf("%d aka else n3 is the largest number",n3);
        }
    }

    return 0;
    
}