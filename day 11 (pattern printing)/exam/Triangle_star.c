/*
         *
        * *
       * * *
      * * * *
     * * * * *
*/
#include<stdio.h>
int main()
{
    int i,j;
    int n;

    printf("Enter your pattern number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)<=n){
            printf(" ");
            } else{
            printf(" *");
            }
        }
        printf("\n");
    }
    return 0;
}



/*
             1
           1 2 1
         1 2 3 2 1
       1 2 3 4 3 2 1
     1 2 3 4 5 4 3 2 1
*/

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5 - i; j++)
//         {
//             printf("  ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf(" %d", j);
//         }

//         for (int j = i - 1; j >= 1; j--)
//         {
//             printf(" %d", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }