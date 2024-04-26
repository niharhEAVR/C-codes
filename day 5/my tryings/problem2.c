#include<stdio.h>
int main()
{
    double ai,it,ta,da,pf,mi;
    printf("Enter your Annual Income: ");
    scanf("%lf",&ai);
    it = (ai*0.15);
    mi = (ai/12);
    ta = (mi*0.1);
    da = (mi*0.1);
    pf = (mi*0.05);
    printf("Your income tax on annual income is:%.2lf\n",it);
    printf("Your TA on monthly income is:%.2lf\n",ta);
    printf("Your DA on monthly income is:%.2lf\n",da);
    printf("Your PF on monthly income is:%.2lf",pf);

    return 0;
}