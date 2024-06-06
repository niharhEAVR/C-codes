#include<stdio.h>
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
    float largest = numbers[0];
    for(int j=0; j<size; j++){
        if(numbers[j]>largest){
            largest = numbers[j];
        }
    }
    printf("The largset number is: %.2f",largest);
    return 0;
}