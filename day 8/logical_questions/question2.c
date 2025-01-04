#include<stdio.h>
int main()
{
    char c = 1;
    if(c-- == 0){
        printf("True");
    }else if (++c == 1){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}