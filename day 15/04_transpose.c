#include <stdio.h>
int main()
{
    int a[2][3], i, j;

    printf("Enter elements of matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Original Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int b[3][2]; // Transposed matrix

    // Transpose the matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            b[i][j] = a[j][i]; // swapping concept
        }
    }

    printf("Transpose of Original matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}



// another example
// #include <stdio.h>
// int main()
// {
//     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

//     int b[3][2];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             b[j][i] = a[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//           printf("%d  ",b[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }