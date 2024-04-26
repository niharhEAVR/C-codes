#include<stdio.h>
int main()
{   

    // another method of pointer additon
    int a[5]={50,1,-1,10,11};
    int *p=&a[0];
    int *q=&a[1];
    int *r=&a[2];
    int *s=&a[3];
    int *t=&a[4];
    
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",*r);
    printf("%d\n",*s);
    printf("%d\n",*t);
    
    
    
    
    return 0;
}