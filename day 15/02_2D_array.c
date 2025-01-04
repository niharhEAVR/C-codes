#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the column size: ");
    scanf("%d", &column);

    int matrix[row][column];
    printf("Enter the values of the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("The values of the matrix is:\n");
    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < column; l++)
        {
            printf("%d\t", matrix[k][l]);
        }
        printf("\n");
    }
    printf("The size  of matrix: %d", sizeof(matrix));
    return 0;
}