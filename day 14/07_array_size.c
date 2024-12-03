#include<stdio.h>
int main()
{
    int arr1[5] = {1,2,3,4,5};
    float arr2[5] = {1,2,3,4,5};
    double arr3[5] = {1,2,3,4,5};
    char arr4[5] = {'1','2','3','4','5'};

    printf("The size of integer array: %d\n",sizeof arr1);
    printf("The size of float array: %d\n",sizeof arr2);
    printf("The size of doucle array: %d\n",sizeof arr3);
    printf("The size of char array: %d\n",sizeof arr4);
    return 0;
}