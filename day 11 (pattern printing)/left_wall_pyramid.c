/*
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    * * * * 
    * * * 
    * * 
    *
*/
#include<stdio.h>
int f(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int c;
    for(int i=1;i<=((2*n)-1);i++){
        if(i<=n){
            for(c=1;c<=i;c++){
                printf("* ");
            }
        }else{
            for(int j=n-2;j>=i-c;j--){
                printf("* ");
            }
        }
        printf("\n");
    }
}
int main()
{
    f();
    printf("\n");
    f();
    printf("\n");
    f();
    printf("\n");
    f();
    printf("\n");
    f();
    
    return 0;
}