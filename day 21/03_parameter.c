#include <stdio.h>
void sub();

int main()
{
    int a = 10, b = 20;
    sub(a, b/*this is actual parameter*/);   // arguments value
    sub(15, 40); // arguments value
    sub(a, 80);  // arguments value
    sub(50, b);  // arguments value

    return 0;
}

void sub(int x, int y /*this is formal parameter*/) // parameter
{
    int sub = x - y;
    printf("The answer is: %d\n", sub);
}