#include <stdio.h>
float sum(); // function prototype or function decalaration

int main() // calling function
{
    // function calling
    sum(); // these are called function
    printf("\n");
    sum();

    return 0;
}

float sum()
{
    int a, b, sum;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    sum = a - b;
    printf("The answer is:%d\n", sum);
}