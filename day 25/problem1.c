#include<stdio.h>
int main()
{
    auto int x=10;
    {
        auto int x;
        printf("%d\n",x);
    }
        printf("%d",x);
    return 0;
}