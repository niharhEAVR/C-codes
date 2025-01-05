#include <stdio.h>
int main()
{
    int a = 10, b = 10, c, d;
    {
        int a = 15, c = 18;
        printf("%d %d %d\n", a, b, c);
        {
            int b = 25, d = 30;
            printf("%d %d %d %d\n", a, b, c, d);
        }
        printf("%d %d %d %d\n", a, b, c, d);
    }
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}