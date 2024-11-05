#include<stdio.h>
int main()
{   
    int a[5]={1,2,3,4,5};
    void *p;
    p=a;
    printf("%d",*(int*)p);  
    //this is the method of type casting

    return 0;
}