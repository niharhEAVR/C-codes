In C programming, **lifetime** refers to the duration for which a variable or function exists in memory. There are two types of lifetimes commonly discussed: **block lifetime** and **program lifetime**.

### 1. **Block Lifetime**
- **Block lifetime** refers to the duration a variable exists during the execution of a **block of code**.
- A **block** is typically defined by curly braces `{ }`, such as in a function, loop, or conditional statement.
- Variables declared inside a block are **created** when the block is entered and **destroyed** when the block is exited.
- These variables are usually **local variables** and are stored in the **stack** memory.

**Example of Block Lifetime:**
```c
#include <stdio.h>

void function() {
    int x = 10;  // 'x' has block lifetime; created when function is called and destroyed when function exits
    printf("%d\n", x);
}  // 'x' is destroyed here when the function exits

int main() {
    function();  // 'x' exists only during this call to function
    return 0;
}
```
- In the example above, the variable `x` has a **block lifetime**. It exists only during the execution of the `function()` and is destroyed when the function finishes executing.

### 2. **Program Lifetime**
- **Program lifetime** refers to the duration a variable or function exists for the **entire duration of the program's execution**.
- Variables with **program lifetime** are typically **global variables** or **static variables** (both local and global).
- These variables are **created** when the program starts and **destroyed** when the program terminates.
- These variables are stored in **data** or **bss** sections of memory, not the stack.

**Example of Program Lifetime:**
```c
#include <stdio.h>

int globalVar = 20;  // 'globalVar' has program lifetime; created when program starts and destroyed when program ends

void function() {
    printf("%d\n", globalVar);
}

int main() {
    function();  // 'globalVar' exists throughout the program
    return 0;
}
```
- In this example, `globalVar` has a **program lifetime**. It exists from the start of the program until it terminates.

### Key Differences:
| Lifetime Type      | Variables Involved      | Duration of Existence  | Memory Location     |
|--------------------|-------------------------|------------------------|---------------------|
| **Block Lifetime**  | Local variables (non-static) | Exists only within a block of code (e.g., a function or loop) | Stack memory       |
| **Program Lifetime** | Global and static variables | Exists for the entire program's execution | Data or BSS sections (heap or static memory) |

### Summary:
- **Block Lifetime**: The variable exists only within a specific block of code, like a function or loop, and is destroyed once the block is exited.
- **Program Lifetime**: The variable exists for the entire duration of the program, from start to finish, and is not destroyed until the program terminates.