### **1. What is a Segmentation Fault?**

A **segmentation fault** occurs when a program tries to access a memory location it is not allowed to access. This is a runtime error and typically happens when the program:

- Tries to access memory that it hasn’t allocated.
- Dereferences a null or invalid pointer.
- Overwrites memory (e.g., writing outside the bounds of an array).

#### **Common Causes of Segmentation Faults in C**:
1. **Accessing uninitialized pointers**:
   ```c
   int *ptr;
   *ptr = 10; // Undefined behavior, leads to segmentation fault
   ```

2. **Dereferencing a NULL pointer**:
   ```c
   int *ptr = NULL;
   printf("%d", *ptr); // Segmentation fault
   ```

3. **Stack overflow**:
   - In recursion, if there is no proper base case or recursion depth is too large, it can exhaust stack memory.

---

### **2. What is a Base Case in Recursion?**

The **base case** is the condition in a recursive function that stops the recursion. Without a base case, the recursion will continue indefinitely, causing a **stack overflow**.

#### **Why is the Base Case Important?**
1. **Stops Infinite Recursion**: Prevents the program from exhausting memory.
2. **Defines the Simplest Problem**: The base case provides a straightforward solution to the smallest version of the problem.

#### **Example**:
```c
int factorial(int n) {
    if (n == 1) { // Base case
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
```

- **Base Case**: `if (n == 1) return 1;`
- **Recursive Case**: `n * factorial(n - 1);`

If the base case were missing, the function would keep calling itself infinitely, eventually causing a segmentation fault due to stack overflow.

---

### **3. What is Indirect Recursion?**

In **indirect recursion**, a function calls another function, which eventually calls the first function again. This creates a loop of function calls.

#### **Example**:
```c
#include <stdio.h>

void functionA(int n);
void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        printf("A: %d\n", n);
        functionB(n - 1); // Calls functionB
    }
}

void functionB(int n) {
    if (n > 0) {
        printf("B: %d\n", n);
        functionA(n - 1); // Calls functionA
    }
}

int main() {
    functionA(3); // Start the recursion
    return 0;
}
```

#### **Output**:
```
A: 3
B: 2
A: 1
```

#### **Explanation**:
1. `functionA(3)` calls `functionB(2)`.
2. `functionB(2)` calls `functionA(1)`.
3. `functionA(1)` calls `functionB(0)`.
4. The recursion stops when `n == 0`.

---

### **Why is Indirect Recursion Useful?**
- Indirect recursion can be used to split logic across multiple functions, making the code modular and reusable.
- Common in scenarios like state machines or parsing, where different functions handle different states or tasks.

---

### **Key Points Recap**:
- **Segmentation Fault**: Runtime error caused by invalid memory access.
- **Base Case in Recursion**: Essential to stop recursion and prevent stack overflow.
- **Indirect Recursion**: Functions call each other in a cycle until a stopping condition is met.
