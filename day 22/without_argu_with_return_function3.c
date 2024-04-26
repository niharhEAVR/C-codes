#include<Stdio.h>
//with return type and no arguments
int sum(){
    int a=10,b=20;
    int sum=a+b;
    return sum; 
}

int main(){
    int res;
    res=sum();
    printf("result: %d",res);
    return 0;
}