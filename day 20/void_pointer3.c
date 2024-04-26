#include<stdio.h>
int main()
{   
    int a=10;
    void *p;
    p=&a;
    printf("%d",*(int*)p);  
    //this is the method of type casting

    return 0;
}