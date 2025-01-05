#include<stdio.h>
void func(){
    static int x =10;
    ++x;
    printf("%d\n",x);
}
int main()
{
    func();
    func();
    func();
    return 0;
}