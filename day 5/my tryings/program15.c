// WAP in C to enter P, T ,R and calculate Compound Interest(C.I), where P=Principle Amount, T=Time and R=Rate of Interest
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci;
    printf("Enter the Principle amount: ");
    scanf("%f",&p);
    printf("Enter the Time: ");
    scanf("%f",&t);
    printf("Enter the ROI: ");
    scanf("%f",&r);

    ci = p * (pow((1+(r/100)),t));
    printf("C.I=%.2f\n",ci);
    printf("Total amount with interset = %.2f",(ci+p));
    return 0;
}