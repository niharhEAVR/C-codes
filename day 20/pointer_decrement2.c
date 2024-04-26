#include<stdio.h>
int main()
{   
    int a[5]={1,2,3,4,5};
    int *p=&a[4];  
    //  printf("%d\n",*--p);
      printf("%d\t\t%d\t\t%d",*--p,*--p,*++p);
    //  printf("%d\t%d\t%d",*++p,*p--,*p++);


    return 0;
}