// WAP in C to enter marks of 5 subjects and calculate total, average and percentage
#include <stdio.h>
int main()
{
    float ben, eng, phy, math, chem, total, percen, avg;
    printf("Enter the marks of Bengali out of 100:");
    scanf("%f", &ben);
    printf("Enter the marks of English out of 100:");
    scanf("%f", &eng);
    printf("Enter the marks of Physics out of 100:");
    scanf("%f", &phy);
    printf("Enter the marks of Math out of 100:");
    scanf("%f", &math);
    printf("Enter the marks of Chemistry out of 100:");
    scanf("%f", &chem);

    total = (ben + eng + phy + math + chem);
    avg = total/5;
    percen = (total/500)*100;
    printf("Total marks you got:%.f\n",total);
    printf("Average: %.2f\n",avg);
    printf("Percentage: %.2f",percen);
    return 0;
}