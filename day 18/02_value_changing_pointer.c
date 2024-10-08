#include<stdio.h>
int main()
{   

    int a = 10, b = 30;
    int *p=&a, *q=&b;
    printf("a=%d\n", a);
    *p = 20;
    printf("Value of a=%d\n", a);
    printf("value of p or address of a=%d\n",p);



    int c = *q;
    printf("value of q or address of b=%d\n",q);
    printf("value of c=%d\n",c);

    return 0;
}