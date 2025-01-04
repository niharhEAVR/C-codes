#include<stdio.h>
int main()
{   
    int a[5]={1,2,3,4,5};
    int *p=&a[4];  
    // int *p=a;  
    //  printf("%d\n",*--p);
    printf("%d\t\t%d\t\t%d",*--p,*--p,*++p);
    //  printf("%d\t%d\t%d",*++p,*p--,*p++);

    // printf() follows the right to left sequence


    return 0;
}