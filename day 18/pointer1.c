#include <stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("value of a: %d\n",a);
    printf("address of variable a is: %d\n",&a);
    printf("value of pointer p: %d\n",p);
    // hexadecimal address = %x
    printf("address of variable a in hexadecimal: %x\n",p);
    printf("value of pointer p in hexadecimal: %x",p);
    
    return 0;
}