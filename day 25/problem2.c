#include<stdio.h>

void func(){
    auto int a = 10;
    ++a;
    printf("%d\n",a);
}

int main()
{
    func();
    func();
    func();
    return 0;
}