#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip the rest of the loop when i is 5
        }
        else if (i == 8) {
            break;  // Exit the loop when i is 8
        }
        printf("%d\n", i);
    }
    return 0;
}