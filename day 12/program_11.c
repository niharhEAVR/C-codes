/* Find the sum of the first 10 terms of the arithmetic 
series: 3, 7, 11, 15, 
*/
#include<stdio.h>
int main()
{
    double n,sum,a,d;
    printf("Enter the value of n:");
    scanf("%lf",&n);
    printf("\nEnter the value of a:");
    scanf("%lf",&a);
    printf("\nEnter the value of d:");
    scanf("%lf",&d);

    sum = (n/2)*((2*a)+((n-1)*d));
    printf("\nThe sum is:%.lf",sum);

    return 0;
}