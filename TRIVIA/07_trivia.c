#include<stdio.h>
int main() {
    char *p = "A";
    char c = 'A';
    printf("%lu\n", sizeof(p)); // pointer size
    printf("%lu\n", sizeof(c)); // 1 byte
    return 0;
}
