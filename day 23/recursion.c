#include <stdio.h>
int sum(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return sum(x + 1, y - 1);
    }
}
int main()
{
    int r;
    r = sum(5, 4);
    printf("The result is: %d", r);
    return 0;
}