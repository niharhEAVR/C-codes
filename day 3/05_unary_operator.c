#include <stdio.h>
int main()
// day 3
{
    // 5) Operetor in C -- (Unary operator)
    /* 
       2 types
       unary increment = ++
       unary decrement = --

       int a=10;
       a++;
       
       a++ = a+1 = 10+1 = 11

       int b=10;
       b--;

       b-- = b-1 = 10-1 = 9
    */

    int a=10,y;
    y=a--;
    printf("%d\n",y);
    printf("%d\n\n",a);

    int b=10,x;
    x=b++;
    printf("%d\n",x);
    printf("%d",b);

    return 0;
}