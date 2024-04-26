#include<stdio.h>
int main()
{   
    int a=10; // level 0
    int *p=&a; // level 1
    int **q=&p; // level 2
    int ***r=&q; // level 3
    int ****s=&r; // level 4

    printf("value of a = %d\n",a);
    printf("value of p or address of a = %d\n",p);
    printf("value of q or address of p = %d\n",q);
    printf("value of r or address of q = %d\n",r);
    printf("value of s or address of r = %d\n\n",s);

    // Indirection operator
    printf("value of r = %d\n",*s);
    printf("value of q = %d\n",**s);
    printf("value of p = %d\n",***s);
    printf("value of a = %d\n",****s);
    // reverse order

    return 0;
}