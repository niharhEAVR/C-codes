#include <stdio.h>
int main()
{
    int a[2][3], i, j;
    int rowSum, colSum;
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
        }
        printf("\n");
    }
    
    //sum of individual row and coloumn
    for(int i = 0; i < 2; i++) {
        rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, rowSum);
    }
    printf("\n");

    // Calculate and print sum of each column
    for(int i = 0; i < 3; i++) {
        colSum = 0;
        for(int j = 0; j < 2; j++) {
            colSum += a[j][i];
        }
        printf("Sum of column %d = %d\n", i+1, colSum);
    }


    return 0;
}