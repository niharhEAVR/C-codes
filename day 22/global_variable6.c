#include<stdio.h>

int a=20;
int b=33;
int fun(int x,int y){
    return (a-b);
}
int main(){
    int r=fun(a,b);
    printf("sub is: %d",r);  
}
