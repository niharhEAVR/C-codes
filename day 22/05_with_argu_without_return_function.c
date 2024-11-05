#include<stdio.h>

//with arguments but no return type
void sum(int x, int y){
    
    int sum=x+y;
    printf("sum is: %d",sum);
    
}
int main(){
    
    int a=10,b=20;
    sum(a,b);
    return 0;
}