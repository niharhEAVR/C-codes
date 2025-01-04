In C, **unary operators** are operators that operate on a single operand (variable or value). They perform various operations such as negation, increment, or dereferencing. Unary operators are typically used to manipulate the value of a single variable or perform a single operation on a value.

### Types of Unary Operators in C:

1. **Unary Minus (`-`)**:
   - This operator is used to negate the value of a number.
   - It changes the sign of the operand.
   
   #### Syntax:
   ```c
   -operand
   ```

   #### Example:
   ```c
   int x = 5;
   int y = -x;  // y will be -5
   printf("y = %d\n", y);
   ```

2. **Unary Plus (`+`)**:
   - This operator does not change the value of the operand but is used to indicate a positive value explicitly.
   - It is mostly redundant since numbers are positive by default unless specified otherwise.

   #### Syntax:
   ```c
   +operand
   ```

   #### Example:
   ```c
   int x = 5;
   int y = +x;  // y will be 5
   printf("y = %d\n", y);
   ```

3. **Increment (`++`)**:
   - The increment operator is used to increase the value of a variable by 1.
   - It can be used in **prefix** or **postfix** form.
     - **Prefix increment (`++x`)**: Increments the value before using it.
     - **Postfix increment (`x++`)**: Increments the value after using it.

   #### Syntax:
   ```c
   ++operand   // Prefix increment
   operand++   // Postfix increment
   ```

   #### Example:
   ```c
   int x = 5;
   printf("%d\n", ++x);  // Output: 6 (x is incremented first)
   printf("%d\n", x++);  // Output: 6 (x is used first, then incremented)
   printf("%d\n", x);    // Output: 7 (x is now 7 after the postfix increment)
   ```

4. **Decrement (`--`)**:
   - The decrement operator is used to decrease the value of a variable by 1.
   - It can be used in **prefix** or **postfix** form.
     - **Prefix decrement (`--x`)**: Decreases the value before using it.
     - **Postfix decrement (`x--`)**: Decreases the value after using it.

   #### Syntax:
   ```c
   --operand   // Prefix decrement
   operand--   // Postfix decrement
   ```

   #### Example:
   ```c
   int x = 5;
   printf("%d\n", --x);  // Output: 4 (x is decremented first)
   printf("%d\n", x--);  // Output: 4 (x is used first, then decremented)
   printf("%d\n", x);    // Output: 3 (x is now 3 after the postfix decrement)
   ```

5. **Logical NOT (`!`)**:
   - The logical NOT operator is used to reverse the logical state of its operand.
   - If the operand is non-zero (true), the result is `0` (false). If the operand is `0` (false), the result is `1` (true).

   #### Syntax:
   ```c
   !operand
   ```

   #### Example:
   ```c
   int x = 5;
   printf("%d\n", !x);  // Output: 0 (since x is non-zero, logical NOT gives 0)
   
   int y = 0;
   printf("%d\n", !y);  // Output: 1 (since y is zero, logical NOT gives 1)
   ```

6. **Bitwise NOT (`~`)**:
   - The bitwise NOT operator is used to invert all the bits of its operand.
   - It changes all `1`s to `0`s and all `0`s to `1`s.

   #### Syntax:
   ```c
   ~operand
   ```

   #### Example:
   ```c
   int x = 5;  // Binary representation of 5: 0000 0101
   printf("%d\n", ~x);  // Output: -6 (Binary inversion of 5 results in -6)
   ```

7. **Dereference (`*`)**:
   - The dereference operator is used to access the value stored at the address pointed to by a pointer.
   - It is used with pointers to obtain the value at the memory location the pointer is pointing to.

   #### Syntax:
   ```c
   *pointer
   ```

   #### Example:
   ```c
   int x = 10;
   int *ptr = &x;  // Pointer to x
   printf("%d\n", *ptr);  // Output: 10 (dereferencing ptr gives the value of x)
   ```

8. **Address-of (`&`)**:
   - The address-of operator is used to get the memory address of a variable.
   - It is commonly used to pass the address of a variable to a function or to create pointers.

   #### Syntax:
   ```c
   &variable
   ```

   #### Example:
   ```c
   int x = 10;
   int *ptr = &x;  // &x gives the address of x
   printf("%p\n", ptr);  // Output: Address of x
   ```

### Summary of Unary Operators in C:

| Operator | Description                     | Example                        |
|----------|---------------------------------|--------------------------------|
| `-`      | Unary minus (negation)          | `-x` (negates the value of x)  |
| `+`      | Unary plus (indicates positive) | `+x` (indicates positive value)|
| `++`     | Increment (prefix or postfix)   | `++x` (pre-increment), `x++` (post-increment) |
| `--`     | Decrement (prefix or postfix)   | `--x` (pre-decrement), `x--` (post-decrement) |
| `!`      | Logical NOT                     | `!x` (inverts the logical value of x) |
| `~`      | Bitwise NOT                     | `~x` (inverts all bits of x)   |
| `*`      | Dereference (pointer)           | `*ptr` (access value at ptr)  |
| `&`      | Address-of (pointer)            | `&x` (address of x)            |

### Example Program Using Unary Operators:
```c
#include <stdio.h>

int main() {
    int x = 5, y = 10;
    
    // Unary minus
    printf("Unary minus: %d\n", -x);  // Output: -5
    
    // Unary plus
    printf("Unary plus: %d\n", +x);   // Output: 5
    
    // Increment
    printf("Increment: %d\n", ++x);   // Output: 6 (pre-increment)
    printf("Increment: %d\n", y++);   // Output: 10 (post-increment)
    printf("After post-increment: %d\n", y);  // Output: 11
    
    // Decrement
    printf("Decrement: %d\n", --x);   // Output: 5 (pre-decrement)
    printf("Decrement: %d\n", y--);   // Output: 11 (post-decrement)
    printf("After post-decrement: %d\n", y);  // Output: 10
    
    // Logical NOT
    printf("Logical NOT: %d\n", !x);  // Output: 0 (since x is non-zero)
    
    // Bitwise NOT
    printf("Bitwise NOT: %d\n", ~x);  // Output: -6 (inverts all bits of x)
    
    // Dereference and Address-of
    int *ptr = &x;
    printf("Dereference: %d\n", *ptr);  // Output: 5 (value at ptr)
    printf("Address-of: %p\n", &x);    // Output: Address of x
    
    return 0;
}
```

### Summary:
- Unary operators operate on a single operand.
- They include operators like `-`, `+`, `++`, `--`, `!`, `~`, `*`, and `&`.
- These operators are used to manipulate values, increment or decrement variables, perform logical or bitwise operations, and work with pointers.