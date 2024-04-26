#include <stdio.h>
int main()
{
    int a[2][3], i, j,sum=0;
    printf("Enter elements of matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum is:%d",sum);

    return 0;
}