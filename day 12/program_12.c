// 1/1!+1/2!+1/3!+1/4!+........+1/n!
#include <stdio.h>

int main() {
    int num;
    double facto, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        facto = 1;
        for(int j = 1; j <= i; j++) {
            facto *= j;
        }
        sum += 1 / facto;
    }

    printf("Sum of series: %.2lf\n", sum);
    return 0;
}