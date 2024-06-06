// functional value formula f(x) = x^2 + 2x + 1
#include<stdio.h>
#include<math.h>
int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    float numbers[size];
    printf("Enter %d numbers:\n",size);
    for(int i=0; i<size; i++){
        printf("Number %d: ",i+1);
        scanf("%f",&numbers[i]);
    }
    printf("The functional value\n");
    for(int j=0; j<size; j++){
        float result = pow(numbers[j],2) + 2*numbers[j] + 1;
        printf("f(%.2f): %.2f\n",numbers[j],result);
    }

    return 0;
}