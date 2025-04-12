#include<stdio.h>
int main() {
    const int a = 100;
    int* p = (int*)&a;
    *p = 200;
    printf("%d\n", a);
    printf("%d\n", *p);
    return 0;
}


// making const unstable