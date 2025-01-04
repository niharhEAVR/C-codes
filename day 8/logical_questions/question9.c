#include<stdio.h>
int x;
int main()
{
    if(x){
        printf("hI");
    }else{
        printf("Hello");
    }
    return 0;
}


// By default, global variables (if not explicitly initialized) are initialized to 0 for int and 0.0 for float.