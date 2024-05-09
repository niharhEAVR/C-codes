#include<stdio.h>
int swap(int x,int y){
    int temp = x;
    x=y;
    y=temp;
    printf("After swapping inside function: x=%d,y=%d\n",x,y);
}
int main(){
    int a=13,b=26;
    printf("Before swapping: a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("But this remains same here: a=%d,b=%d\n",a,b);
    printf("Thats why we need call by reference.");
    return 0;
}