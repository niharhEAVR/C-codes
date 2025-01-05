#include <stdio.h>
int func(int n)
{
    static int x = 1;
    if (n >= 5)
    {
        return n;
    }
    n = n + x;
    ++x;
    return func(n);
}
int main()
{
    int r;
    r = func(1);
    printf("%d\n", r);

    return 0;
}