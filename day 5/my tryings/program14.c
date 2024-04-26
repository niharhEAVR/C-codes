// WAP in C to enter P,T,R and calculate simple interest, where p=principle, t=time, r= rate of interest.
#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("Enter the Principle amount:");
    scanf("%f",&p);
    printf("Enter the Time:");
    scanf("%f",&t);
    printf("Enter the Rate of interest:");
    scanf("%f",&r);

    si = (p*t*r)/100;
    printf("So the Simple Interest will be:%.2f\n",si);
    printf("Total amount after the maturity:%.2f",(si+p));
    return 0;
}