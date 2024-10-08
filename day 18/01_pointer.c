#include <stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("value of a: %d\n",a);
    printf("address of variable a is: %d\n",&a);
    printf("value of pointer p: %d\n",p);
    printf("value of pointer p: %d\n",*p);
    // hexadecimal address = %x
    printf("address of variable a in hexadecimal: %x\n",p);
    printf("value of pointer p in hexadecimal: %x\n\n\n",p);


    int b = 919;
    printf("the value of b is: %d",*&b);

    
    return 0;
}