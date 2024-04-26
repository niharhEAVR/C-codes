#include <stdio.h>
void sum();

int main()
{
    int a = 10, b = 20;
    sum(a, b/*this is actual parameter*/);   // arguments value
    sum(15, 40); // arguments value
    sum(a, 80);  // arguments value
    sum(50, b);  // arguments value

    return 0;
}

void sum(int x, int y /*this is formal parameter*/) // parameter
{
    int sum = x - y;
    printf("The answer is: %d\n", sum);
}