#include <stdio.h>
float sum(float,int,int); // it should be same with @ parameter

int main()
{
    float a = 10.9;
    int b = 20 , z=1;
    float r;
    r = sum(a,b,z);
    printf("The result is:%.1f",r);
 

    return 0;
}

float sum(float x, int y , int z) // @ parameter
{
    // int sum = x - y;
    // return sum;
    return (x-y+z);
    printf("after return nothing will execute");
}

// number of argument should equal to parameter
// parameter and header function sequence also need to equal