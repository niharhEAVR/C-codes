#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0.0, mean, variance = 0.0, std_deviation;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the number of elements is valid
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Create an array to hold the elements
    double numbers[n];

    // Read the elements from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    // Calculate the mean
    for (i = 0; i < n; i++) {
        sum += numbers[i];
    }
    mean = sum / n;

    // Calculate the variance
    for (i = 0; i < n; i++) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= n;

    // Calculate the standard deviation
    std_deviation = sqrt(variance);

    // Print the results
    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}
