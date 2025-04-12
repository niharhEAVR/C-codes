#include<stdio.h>
#define square(x) x*x

int main() {
    int a = 3;
    int b = square(a + 1); // Expands to: a + 1 * a + 1
    printf("%d\n", b);
    return 0;
}
