#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Iterate until number becomes 0
    while (number != 0) {
        // Extract the last digit
        digit = number % 10;
        
        // Add the last digit to the sum
        sum += digit;

        // Remove the last digit from the number
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
