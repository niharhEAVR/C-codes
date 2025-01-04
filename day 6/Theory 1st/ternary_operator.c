#include<stdio.h>
int main()
{
    int a=10,b=20;
    int flag = (a==b) ? 1 : 0;
    printf("answer = %d means false\n",flag);

    (a>b)? printf("true") : printf("false");
    return 0;
}