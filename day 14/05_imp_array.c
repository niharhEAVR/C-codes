// addition of two arrays in another array
#include <stdio.h>
int main()
{
    int a[5],b[5],c[5];

    printf("Enter the items of array a: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the items of array b: \n");
    for(int j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }

    printf("The items of array c is: \n");
    for(int k=0;k<5;k++)
    {
        c[k] = a[k] + b[k];
        printf("Sum of array elements at index %d is %d\n",k,c[k]);
    }

    return 0;
}