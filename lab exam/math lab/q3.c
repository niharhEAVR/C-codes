#include <stdio.h>

int sumUsingFormula(int x) {
    return x * (x + 1) / 2;
}

int sumUsingLoop(int y) {
    int sum = 0;
    for (int i = 1; i <= y; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using formula
    int sum_formula = sumUsingFormula(n);
    printf("Sum of first %d natural numbers using formula: %d\n", n, sum_formula);

    // Using loop
    int sum_loop = sumUsingLoop(n);
    printf("Sum of first %d natural numbers using loop: %d\n", n, sum_loop);

    return 0;
}