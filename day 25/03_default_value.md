In C, the default value of a variable depends on its **storage class** and whether it is initialized explicitly. Here's an overview of the default values for different storage classes:

### 1. **auto** Storage Class
- **Default Value**: **Garbage** (uninitialized).
- Local variables declared with `auto` are automatically created when the block (function or loop) is entered, but they are not initialized by default. Their values are garbage (random values from the memory location they occupy).
- **Note**: If you explicitly initialize an `auto` variable, it will take that value.

**Example:**
```c
#include <stdio.h>

void function() {
    auto int x;  // Default value is garbage
    printf("%d\n", x);  // May print a random value
}

int main() {
    function();
    return 0;
}
```

### 2. **register** Storage Class
- **Default Value**: **Garbage** (uninitialized).
- Like `auto`, variables declared with `register` are local to the function/block and are not initialized by default. Their values are garbage.
- **Note**: You cannot take the address of a `register` variable using `&`.

**Example:**
```c
#include <stdio.h>

void function() {
    register int x;  // Default value is garbage
    printf("%d\n", x);  // May print a random value
}

int main() {
    function();
    return 0;
}
```

### 3. **static** Storage Class
- **Default Value**: **Zero** (if not explicitly initialized).
- If a variable is declared as `static` (whether local or global), it is automatically initialized to zero if no explicit initialization is provided.
- **Note**: This applies to both local and global `static` variables.

**Example (static local variable):**
```c
#include <stdio.h>

void function() {
    static int x;  // Default value is 0
    printf("%d\n", x);  // Output: 0
    x++;
    printf("%d\n", x);  // Output: 1 (x retains its value between function calls)
}

int main() {
    function();
    function();
    return 0;
}
```

**Example (static global variable):**
```c
#include <stdio.h>

static int x;  // Default value is 0

void function() {
    printf("%d\n", x);  // Output: 0
}

int main() {
    function();
    return 0;
}
```

### 4. **extern** Storage Class
- **Default Value**: **Undefined** (but must be initialized in another file or elsewhere in the program).
- The `extern` keyword is used to declare a variable that is defined in another file. It does not allocate memory or assign a default value. The actual value is assigned in the definition of the variable.
- If you use `extern` without a corresponding definition, the program will fail to link.

**Example:**
```c
#include <stdio.h>

extern int x;  // Declaring an extern variable (no default value)

int main() {
    printf("%d\n", x);  // Will cause a linking error if x is not defined elsewhere
    return 0;
}
```

### Summary of Default Values:
| Storage Class | Default Value (if not initialized) |
|---------------|-----------------------------------|
| **auto**      | Garbage (uninitialized)           |
| **register**  | Garbage (uninitialized)           |
| **static**    | Zero (0)                           |
| **extern**    | Undefined (must be defined elsewhere) |

### Important Notes:
- **Local variables** (with `auto` and `register`) are not initialized by default, so their values are indeterminate (garbage).
- **Static variables** (both local and global) are automatically initialized to zero if no explicit value is provided.
- **Extern variables** do not have a default value, as they refer to variables defined elsewhere in the program.


---
---
---

Ah, I see! The behavior you're observing where `auto` variables are printing `0` is likely due to the **compiler's initialization behavior**. While the **default value** of an `auto` variable is technically **garbage** (uninitialized), some compilers may initialize local variables to `0` for safety or debugging purposes, especially in certain environments (like IDEs with debugging features enabled).

However, this is not the C standard behavior, and the value should **not** be guaranteed to be `0`. It should be **garbage** if not explicitly initialized.

### Example of `auto` with Garbage Value:
```c
#include <stdio.h>

void function() {
    auto int x;  // Default value is garbage
    printf("%d\n", x);  // Expected to print a random, garbage value
}

int main() {
    function();
    return 0;
}
```
In this case, you would expect `x` to contain a random value (garbage), not `0`.

### Why You Might See `0`:
1. **Compiler/IDE Behavior**: Some compilers or development environments (like in debug mode) initialize local variables to `0` to avoid undefined behavior or to help with debugging.
2. **Compiler Flags**: Some compilers, especially in debug mode, might initialize variables to `0` to make debugging easier and avoid unpredictable outputs.

### Solution:
To avoid confusion, always **explicitly initialize** local variables if you want them to have a known value.

```c
#include <stdio.h>

void function() {
    auto int x = 0;  // Explicitly initialized to 0
    printf("%d\n", x);  // Output: 0
}

int main() {
    function();
    return 0;
}
```

This way, you can be sure of the value being used in your program, and the compiler won't surprise you with unexpected values.