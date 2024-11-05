#include <stdio.h>
int main()
{
    int arr[2][3][2] = {{{1, 4}, {7, 9}, {1, 2}}, {{1, 4}, {7, 9}, {1, 2}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d  ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // like this way we can create n times of array
    int arr2[2][2][3][2] = {
        {{{1, 4}, {7, 9}, {1, 2}},
         {{1, 4}, {7, 9}, {1, 2}}},
        {{{1, 4}, {7, 9}, {1, 2}},
         {{1, 4}, {7, 9}, {1, 2}}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 2; l++)
                {
                    printf("%d    ", arr2[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    
    return 0;
}