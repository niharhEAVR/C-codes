#include<stdio.h>
void sum()
{
    int a,b,sum;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("The answer is:%d\n",sum);
}
int main()// calling function
{   
    /* function calling */
    sum(); // these are called function
    printf("\n");
    sum(); // Function Modularity
 
    return 0;
}