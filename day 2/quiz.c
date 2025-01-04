// What data type will 3.0/8 – 2 return?

#include <stdio.h>
int main()
{
    float a = 3.0 / 8 - 2;
    printf("%f\n", a); // 1.625

    int b = (3.2 / 8 - 2);
    printf("%d\n", b); // 1

    int c = 3.2 / 8 - 2;
    printf("%f\n", c); // In this case, when -1 (an integer) is printed as a float, it may lead to unpredictable results, and that's why you're seeing -1.625001 instead of the expected -1.000000.
    return 0;
}