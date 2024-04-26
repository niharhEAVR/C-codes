#include<stdio.h>
int main()
{   
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    int *q=&a[3];
    p=q-2;
    printf("%d",*p);

    return 0;
}