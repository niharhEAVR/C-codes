#include<stdio.h>
int main()
{
    double annualIncome,incomeTax,TA,DA,PF,monthlyIncome;
    printf("Enter your Annual Income: ");
    scanf("%lf",&annualIncome);
    incomeTax = (annualIncome*0.15);
    monthlyIncome = (annualIncome/12);
    TA = (monthlyIncome*0.1);
    DA = (monthlyIncome*0.1);
    PF = (monthlyIncome*0.05);
    printf("Your income tax on annual income is:%.2lf\n",incomeTax);
    printf("Your TA on monthly income is:%.2lf\n",TA);
    printf("Your DA on monthly income is:%.2lf\n",DA);
    printf("Your PF on monthly income is:%.2lf",PF);

    return 0;
}