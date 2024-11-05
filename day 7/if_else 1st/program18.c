#include<stdio.h>
int main()
{
    float a,b,c,d,r;
    printf("Enter the values of a,b,c,d:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float cd=(c-d);
    if(cd==0){
        printf("Invaild operation!! (denominator becomes zero)");
    } else{
        r=(a+b)/cd;
        printf("The ratio of (a+b) and (c-d) is: %.2f",r);
    }
    return 0;
}