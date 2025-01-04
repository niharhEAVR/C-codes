In C, format specifiers are used in functions like `printf()` to specify the type of data being printed. Each datatype has its corresponding format specifier.

Here’s a list of the format specifiers for common datatypes:

### 1. **Integer Types:**
- **`%d`** or **`%i`**: Signed integer (decimal).
  - Example: `int x = 10; printf("%d", x);`  // Prints `10`
  
- **`%u`**: Unsigned integer (decimal).
  - Example: `unsigned int x = 10; printf("%u", x);`  // Prints `10`

- **`%o`**: Unsigned integer (octal).
  - Example: `unsigned int x = 10; printf("%o", x);`  // Prints `12` (octal representation of 10)

- **`%x`**: Unsigned integer (hexadecimal, lowercase).
  - Example: `unsigned int x = 10; printf("%x", x);`  // Prints `a`

- **`%X`**: Unsigned integer (hexadecimal, uppercase).
  - Example: `unsigned int x = 10; printf("%X", x);`  // Prints `A`

- **`%ld`**: Signed long integer.
  - Example: `long x = 100000; printf("%ld", x);`  // Prints `100000`

- **`%lu`**: Unsigned long integer.
  - Example: `unsigned long x = 100000; printf("%lu", x);`  // Prints `100000`

- **`%lld`**: Signed long long integer.
  - Example: `long long x = 1000000000; printf("%lld", x);`  // Prints `1000000000`

- **`%llu`**: Unsigned long long integer.
  - Example: `unsigned long long x = 1000000000; printf("%llu", x);`  // Prints `1000000000`

### 2. **Floating-Point Types:**
- **`%f`**: Floating-point number (decimal notation).
  - Example: `float x = 3.14; printf("%f", x);`  // Prints `3.140000`

- **`%e`**: Floating-point number (scientific notation, lowercase).
  - Example: `float x = 3.14; printf("%e", x);`  // Prints `3.140000e+00`

- **`%E`**: Floating-point number (scientific notation, uppercase).
  - Example: `float x = 3.14; printf("%E", x);`  // Prints `3.140000E+00`

- **`%g`**: Floating-point number (uses either normal or scientific notation depending on the value).
  - Example: `float x = 3.14; printf("%g", x);`  // Prints `3.14`

- **`%G`**: Floating-point number (uses either normal or scientific notation depending on the value, uppercase).
  - Example: `float x = 3.14; printf("%G", x);`  // Prints `3.14`

### 3. **Character Types:**
- **`%c`**: Single character.
  - Example: `char c = 'A'; printf("%c", c);`  // Prints `A`

- **`%s`**: String (array of characters).
  - Example: `char str[] = "Hello"; printf("%s", str);`  // Prints `Hello`

### 4. **Pointer Types:**
- **`%p`**: Pointer (prints the address of the pointer).
  - Example: `int x = 10; int *ptr = &x; printf("%p", ptr);`  // Prints the memory address of `ptr`

### 5. **Other Types:**
- **`%ld`**: Long integer.
  - Example: `long x = 100000; printf("%ld", x);`  // Prints `100000`

- **`%lf`**: Double precision floating-point number.
  - Example: `double x = 3.14159; printf("%lf", x);`  // Prints `3.141590`

- **`%Lf`**: Long double precision floating-point number.
  - Example: `long double x = 3.14159; printf("%Lf", x);`  // Prints `3.141590`

### 6. **Special Format Specifiers:**
- **`%%`**: Prints a literal `%` character.
  - Example: `printf("100%%");`  // Prints `100%`

### Summary Table:

| Datatype                    | Format Specifier       |
|-----------------------------|------------------------|
| `int`                        | `%d` or `%i`           |
| `unsigned int`               | `%u`                   |
| `short`                      | `%hd`                  |
| `long`                       | `%ld`                  |
| `long long`                  | `%lld`                 |
| `unsigned long`              | `%lu`                  |
| `float`                      | `%f`                   |
| `double`                     | `%lf`                  |
| `long double`                | `%Lf`                  |
| `char`                       | `%c`                   |
| `string (char array)`        | `%s`                   |
| `pointer`                    | `%p`                   |
| `octal` (unsigned int)       | `%o`                   |
| `hexadecimal (lowercase)`    | `%x`                   |
| `hexadecimal (uppercase)`    | `%X`                   |
| `scientific notation (lowercase)` | `%e`             |
| `scientific notation (uppercase)` | `%E`             |
| `general notation (lowercase)` | `%g`                |
| `general notation (uppercase)` | `%G`                |
| Literal `%`                  | `%%`                   |

By using the appropriate format specifiers, you can print values of different types in a formatted manner in C.