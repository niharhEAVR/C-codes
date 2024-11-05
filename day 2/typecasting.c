#include<stdio.h>
int main()
{
    int a = 30;
    char c = '5';

    a = (int) c;
    printf("%d\n",a); // ASCII value of 5 will print

    float f = (float)a;
    printf("%f\n",f);


    char b = (char) f;
    printf("%c\n",b); 

    return 0;
}