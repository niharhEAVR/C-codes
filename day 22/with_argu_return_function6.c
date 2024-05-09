#include<stdio.h>
//with arguments and with return type
int sum(int x, int y){
    return (x+y);
}
int main(){
    int a=10,b=20;
    a=30;
    int r=sum(a,b);
    printf("sum is: %d",r);  
}