#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("Welcome to the Guess the Number game!\n");

    do {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < numberToGuess) {
            printf("Higher...\n");
        } else if (guess > numberToGuess) {
            printf("Lower...\n");
        }
    } while (guess != numberToGuess);

    printf("Congratulations! You've guessed the number in %d attempts.\n", attempts);

    return 0;
}
