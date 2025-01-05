#include<stdio.h>
void func(){
    static int x;
    x+=10;
    printf("%d\n",x);
}
int main()
{
    func();
    func();
    return 0;
}