In C, **storage classes** define the scope (visibility), lifetime, and memory location of variables and functions. They tell the compiler where and how long a variable or function should exist in memory, and how it should be accessed.

There are **4 main storage classes** in C:

### 1. **auto**
- **Default storage class** for local variables.
- Variables declared with `auto` are automatically created when the function is called and destroyed when the function exits.
- These variables are stored in the **stack** memory.
- **Scope**: Local to the function/block.
- **Lifetime**: Exists only during the function's execution.

**Example:**
```c
#include <stdio.h>

void function() {
    auto int x = 10;  // auto is optional here, as it is the default
    printf("%d\n", x);
}

int main() {
    function();  // Output: 10
    return 0;
}
```

### 2. **register**
- **Used to store variables in CPU registers** (if possible), rather than RAM, for faster access.
- **Scope**: Local to the function/block.
- **Lifetime**: Exists only during the function's execution.
- **Limitations**: You cannot take the address of a `register` variable using the `&` operator, because it might not have a memory address (it could be in a register).

**Example:**
```c
#include <stdio.h>

void function() {
    register int x = 10;  // Register variable for faster access
    printf("%d\n", x);
}

int main() {
    function();  // Output: 10
    return 0;
}
```

### 3. **static**
- **Used to retain the value of a variable** between function calls.
- **Scope**: Local to the function/block, but the variable is not destroyed when the function exits. It retains its value across multiple calls to the function.
- **Lifetime**: Exists for the lifetime of the program.
- **Global `static` variables** are only accessible within the file they are declared in, making them **file-scope**.

**Example (Static local variable):**
```c
#include <stdio.h>

void function() {
    static int count = 0;  // Retains its value between calls
    count++;
    printf("%d\n", count);
}

int main() {
    function();  // Output: 1
    function();  // Output: 2
    function();  // Output: 3
    return 0;
}
```

**Example (Static global variable):**
```c
#include <stdio.h>

static int x = 5;  // Only accessible within this file

void function() {
    printf("%d\n", x);  // Accessing static variable
}

int main() {
    function();  // Output: 5
    return 0;
}
```

### 4. **extern**
- **Used to declare variables or functions** that are defined in another file or elsewhere in the same file.
- **Scope**: Global to the program, but the actual definition of the variable or function exists in another file or a different part of the program.
- **Lifetime**: Exists for the lifetime of the program.
- **Usage**: Often used for linking variables and functions across different files.

**Example (extern variable):**
```c
// File1.c
#include <stdio.h>

extern int x;  // Declare x from another file

void function() {
    printf("%d\n", x);  // Accessing extern variable
}

// File2.c
#include <stdio.h>

int x = 10;  // Definition of x

int main() {
    function();  // Output: 10
    return 0;
}
```

**Example (extern function):**
```c
// File1.c
#include <stdio.h>

extern void function();  // Declare the function from another file

int main() {
    function();  // Calling extern function
    return 0;
}

// File2.c
#include <stdio.h>

void function() {
    printf("Hello from function!\n");
}
```

### Summary of Storage Classes:
| Storage Class | Scope                 | Lifetime                  | Default Initial Value |
|---------------|-----------------------|---------------------------|-----------------------|
| `auto`        | Local to function/block | Function execution time    | Garbage (uninitialized) |
| `register`    | Local to function/block | Function execution time    | Garbage (uninitialized) |
| `static`      | Local to function/block (or file for global) | Entire program execution | Zero (if not initialized) |
| `extern`      | Global (across files)  | Entire program execution   | Garbage (uninitialized) |

### Key Differences:
- **auto**: Local variables, default behavior.
- **register**: Local variables stored in CPU registers for faster access.
- **static**: Local variables retain their value between function calls, and global variables are restricted to the file.
- **extern**: Refers to variables or functions defined elsewhere (outside the current file).