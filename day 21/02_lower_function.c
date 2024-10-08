#include <stdio.h>
float sub(); // function prototype or function decalaration

int main() // calling function
{
    // function calling
    sub(); // these are called function
    printf("\n");
    sub();

    return 0;
}

float sub()
{
    int a, b, sub;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    sub = a - b;
    printf("The answer is:%d\n", sub);
}