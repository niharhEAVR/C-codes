// WAP in C to enter any number by user and find out the square root value
#include<stdio.h>
#include<math.h>
int main()
{
    float v,result;
    printf("Enter the value:");
    scanf("%f",&v);
    result = sqrt(v);
    printf("The square root value of %.f is:%.f",v,result);
    return 0;
} 