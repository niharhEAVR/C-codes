#include<Stdio.h>
int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter the number of coloms(b/w 1 and 100):");
    scanf("%d",&c);
    printf("Enter the number of rows(b/w 1 and 100):");
    scanf("%d",&r);
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element of a %d%d:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of 2nd matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element of a %d%d:\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The sum of the matrices is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d   ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}