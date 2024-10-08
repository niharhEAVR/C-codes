#include <stdio.h>
int main()
{
    // Run time example
    int num;
    printf("enter the size of array: ");
    scanf("%d",&num);

    int rollNo[num];
    printf("Enter the value of array:\n");
    
    // LOOP: INPUT - ITEM
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&rollNo[i]);
    }
    printf("the value of the array is:\n");

    //ALGORITHM: Traversal algorithm
    for (int i=(num-1); i>=0; i--)
    {
        printf("%d\n", rollNo[i]);
    }
    return 0;
}