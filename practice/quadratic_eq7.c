#include<stdio.h>
#include<math.h>
int quadratic(int,int,int);
int main()
{
    float a,b,c;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    quadratic(a,b,c);
    return 0;
}
int quadratic(int a,int b,int c){
    float root_part = sqrt(pow(b,2)-(4*a*c));
    float result1,result2;
    if(a==0){
        printf("This is not quadratic equation.");
    }else{
        if(root_part>0){
            result1 = (-b+root_part)/2*a;
            result2 = (-b-root_part)/2*a;
            printf("The Roots are %.2f and %.2f\n",result1,result2);
            printf("The Roots are Real number.");
        }else if(root_part==0){
            result1 = -b/2*a;
            result2 = -b/2*a;
            printf("The Roots are %.2f and %.2f\n",result1,result2);
            printf("The Roots are Real number.and root part is equal to zero.");
        }else{
            printf("The Roots are Imaginary numbers.");
        }
    }
}