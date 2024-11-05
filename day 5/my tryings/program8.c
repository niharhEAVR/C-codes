// WAP in C to enter two numbers and find out the power value
#include<Stdio.h>
#include<math.h>
int main()
{
    double n1,n2,p;
    printf("Enter the Base:");
    scanf("%lf",&n1);
    printf("Enter the power:");
    scanf("%lf",&n2);
    p = pow(n1,n2);
    printf("%.lf to the power %.lf is:%.lf",n1,n2,p);
    return 0;

}