#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    printf("%d\n", a & b);
    int c = 1;
    int d = 2;
    printf("%d\n", c | d);
    int e = 100;
    printf("%d\n", ~e);
    int f = 1;
    int g = 2;
    printf("%d", f ^ g);
    return 0;

    /* AND
        0 & 0 = 0
        0 & 1 = 0
        1 & 0 = 0
        1 & 1 = 1
    */
    /* OR
         0 | 0 = 0
         0 | 1 = 1
         1 | 0 = 1
         1 | 1 = 1
     */
    /* XOR
         0 ^ 0 = 0
         0 ^ 1 = 1
         1 ^ 0 = 1
         1 ^ 1 = 0
     */
}