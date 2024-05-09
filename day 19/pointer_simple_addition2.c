#include<stdio.h>
int main()
{ 

    // addition
    /* 
    int a=10;
    int *p=&a;
    p = p+1;
    printf("%d",*p); 
    */

    int a[5]={50,1,-1,10,11};
    int *p=a;
    p+=2;
    printf("%d",*p);
  
    return 0;
}