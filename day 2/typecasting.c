#include <stdio.h>
int main()
{
    int a = 30;
    char c = '5';

    a = (int)c;
    printf("%d\n", a); // ASCII value of 5 will print

    float f = (float)a;
    printf("%f\n", f);

    char b = (char)f;
    printf("%c\n", b);

    return 0;
}

//   Typecasting in C refers to the process of converting a variable from one data type to another. This is necessary when you need to perform operations between different data types or when you want to store a value of one type in a variable of another type.

// There are two types of typecasting in C:

// 1. Implicit Typecasting (Automatic Type Conversion)

/*
#include <stdio.h>

int main() {
    int num = 10;
    float result;

    // Implicit typecasting: int to float
    result = num;  // num is automatically converted to float
    printf("Result: %.2f\n", result);  // Output: 10.00
    return 0;
}
*/

// 2. Explicit Typecasting (Manual Type Conversion)

/*
#include <stdio.h>

int main() {
    float num = 9.8;
    int result;

    // Explicit typecasting: float to int
    result = (int) num;  // Casts the float to int, truncating the decimal part
    printf("Result: %d\n", result);  // Output: 9
    return 0;
}
*/