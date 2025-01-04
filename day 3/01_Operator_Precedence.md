**Operator precedence** in C refers to the rules that determine the order in which operators are evaluated in an expression. When an expression contains multiple operators, the precedence rules decide which operator is applied first. This is crucial for ensuring the correct evaluation of expressions.

### Operator Precedence in C:

Operators with **higher precedence** are evaluated before those with **lower precedence**. If two operators have the same precedence, their **associativity** (whether they are evaluated from left to right or right to left) determines the order of evaluation.

### Operator Precedence Table (from highest to lowest):

| Precedence | Operator(s)                             | Description                                                                 |
|------------|-----------------------------------------|-----------------------------------------------------------------------------|
| 1          | `()`                                    | Parentheses (used to group expressions)                                     |
| 2          | `[]`, `->`, `.`                         | Array subscript, structure member access, pointer-to-member access          |
| 3          | `++`, `--` (postfix)                    | Post-increment, post-decrement                                               |
| 4          | `++`, `--`, `+`, `-`, `!`, `~`, `sizeof` | Unary operators (pre-increment, pre-decrement, negation, bitwise NOT, etc.) |
| 5          | `*`, `/`, `%`                           | Multiplication, division, modulus                                           |
| 6          | `+`, `-`                                | Addition, subtraction                                                        |
| 7          | `<<`, `>>`                              | Bitwise left shift, bitwise right shift                                      |
| 8          | `<`, `<=`, `>`, `>=`                    | Relational operators (less than, less than or equal to, greater than, etc.) |
| 9          | `==`, `!=`                              | Equality and inequality operators                                           |
| 10         | `&`                                     | Bitwise AND                                                                 |
| 11         | `^`                                     | Bitwise XOR                                                                 |
| 12         | `|`                                     | Bitwise OR                                                                  |
| 13         | `&&`                                    | Logical AND                                                                 |
| 14         | `||`                                    | Logical OR                                                                  |
| 15         | `?:`                                    | Ternary (conditional) operator                                               |
| 16         | `=` (assignment)                        | Assignment operators                                                         |
| 17         | `,`                                     | Comma operator (used to separate expressions)                               |

### Associativity:
Associativity determines the direction in which operators of the same precedence level are evaluated. Most operators in C have **left-to-right** associativity, meaning they are evaluated from left to right. However, some operators, like assignment (`=`), have **right-to-left** associativity, meaning they are evaluated from right to left.

#### Left-to-Right Associativity:
- Most operators, such as arithmetic (`+`, `-`, `*`, `/`), relational (`<`, `>`, `==`), and logical operators (`&&`, `||`), are evaluated from **left to right**.

#### Right-to-Left Associativity:
- Some operators, like assignment (`=`), conditional (`?:`), and unary operators (`++`, `--`, `&`, `*`), are evaluated from **right to left**.

### Example:

```c
#include <stdio.h>

int main() {
    int x = 5, y = 3, z = 10;

    // Example 1: Using operators with different precedence
    int result = x + y * z;  // Multiplication has higher precedence than addition
    printf("Result: %d\n", result);  // Output: Result: 35 (5 + (3 * 10))

    // Example 2: Using parentheses to change precedence
    result = (x + y) * z;  // Parentheses change the order of evaluation
    printf("Result: %d\n", result);  // Output: Result: 80 ((5 + 3) * 10)

    // Example 3: Using assignment with right-to-left associativity
    int a = 2, b = 3, c = 4;
    a = b = c;  // Right-to-left associativity of assignment
    printf("a = %d, b = %d, c = %d\n", a, b, c);  // Output: a = 4, b = 4, c = 4

    return 0;
}
```

### Explanation:
1. **Example 1**: 
   - In the expression `x + y * z`, the multiplication (`*`) has higher precedence than addition (`+`), so `y * z` is evaluated first. The result is `5 + 30 = 35`.
   
2. **Example 2**: 
   - By using parentheses `(x + y) * z`, we force the addition to happen first, so the result is `(5 + 3) * 10 = 80`.

3. **Example 3**: 
   - The assignment operator (`=`) has right-to-left associativity. In the expression `a = b = c`, `b = c` is evaluated first, which assigns `c`'s value (4) to `b`. Then, `a = b` assigns the value of `b` (which is now 4) to `a`.

### Summary:
- **Operator precedence** dictates the order in which operators are evaluated in an expression.
- Operators with **higher precedence** are evaluated first.
- **Associativity** determines the order of evaluation for operators with the same precedence level.
- Parentheses can be used to **override** the default precedence order and ensure the correct evaluation.