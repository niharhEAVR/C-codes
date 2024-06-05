#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int num;

    // For string
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);

    // For three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999) {
        int reversed = 0;
        while (num != 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        printf("Reversed number: %d\n", reversed);
    } else {
        printf("Invalid input! Please enter a three-digit number.\n");
    }

    return 0;
}
