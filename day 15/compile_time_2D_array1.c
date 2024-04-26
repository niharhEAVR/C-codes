#include <stdio.h>
int main()
{
    int arr2d[3][3]={{1,2,3},{2,4,6},{4,5,7}};
    // Print the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", arr2d[i][j]);
        }
        printf("\n");
    }

    return 0;
}