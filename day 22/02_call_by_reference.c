#include<stdio.h>
void swapping(int *x, int *y) // x,y are the local variable
{
    int temp=*x; // this method is used for swapping numbers
    *x=*y;
    *y=temp;
    // its actually using pointer for the reference
}
int main()
{
    int a=69,b=96;
    printf("Before swapping: %d %d\n",a,b);
    // now function called
    swapping(&a,&b);
    printf("After swapping: %d %d",a,b);
    return 0;
}