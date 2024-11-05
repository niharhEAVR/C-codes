#include<stdio.h>
int main()
{
    
    // 3) Operetor in C -- (assignment operator)
    /*
    addition +=
    subs -=
    div /=
    mul *=
    module %=
    */
    int a=10;
    int b=60;
    b += a;  // b = b + a 
    printf("%d\n",b);
    b -= a;  // b = b - a
    printf("%d\n",b);
    b /= a;  // b = b / a
    printf("%d\n",b);
    b *= a;  // b = b * a
    printf("%d\n",b);
    b %= a;  // b = b % a
    printf("%d",b);
    
    return 0;
}