### **Direct Calling and Indirect Calling in C**

#### **1. Direct Calling**
When a function is called explicitly by its name, it is known as **direct calling**. This is the simplest and most common way to invoke a function.

#### Example of Direct Calling:
```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet(); // Directly calling the function
    return 0;
}
```
**Explanation**:
- The `main` function directly calls the `greet` function using its name.

---

#### **2. Indirect Calling**
When a function is called through a pointer or another function, it is known as **indirect calling**. This allows more flexibility, such as deciding which function to call at runtime.

#### Example of Indirect Calling:
```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*funcPtr)(); // Declare a function pointer
    funcPtr = greet;   // Assign the address of the function
    funcPtr();         // Indirectly calling the function using the pointer
    return 0;
}
```
**Explanation**:
- A function pointer (`funcPtr`) is used to store the address of the `greet` function.
- The function is called indirectly using the pointer.

---

### **Call Stack in C**

#### **What is the Call Stack?**
The **call stack** is a special region of memory that stores information about active functions (those that have been called but not yet finished). It follows the **LIFO (Last In, First Out)** principle.

#### **How It Works**:
1. When a function is called, its information (such as local variables and return address) is pushed onto the stack.
2. When the function finishes execution, its information is popped off the stack.

---

#### **Call Stack Example**:
```c
#include <stdio.h>

void functionA() {
    printf("Inside Function A\n");
}

void functionB() {
    printf("Inside Function B\n");
    functionA(); // Function A is called
}

int main() {
    printf("Inside Main Function\n");
    functionB(); // Function B is called
    return 0;
}
```

#### **Call Stack Execution**:
1. **Step 1**: `main()` is called → its information is pushed onto the stack.
2. **Step 2**: `functionB()` is called from `main()` → its information is pushed onto the stack.
3. **Step 3**: `functionA()` is called from `functionB()` → its information is pushed onto the stack.
4. **Step 4**: `functionA()` completes → its information is popped from the stack.
5. **Step 5**: `functionB()` completes → its information is popped from the stack.
6. **Step 6**: `main()` completes → its information is popped from the stack.

---

#### **Visual Representation of Call Stack**:

| **Stack (Top to Bottom)** | **Description**                                |
|---------------------------|-----------------------------------------------|
| `functionA()`             | Active when `functionA` is running.          |
| `functionB()`             | Active when `functionB` is running.          |
| `main()`                  | Active when `main()` is running.             |

---

### **Key Points**
- **Direct Calling**: Function is called explicitly by name.
- **Indirect Calling**: Function is called through a pointer or another function.
- **Call Stack**: A memory structure that tracks active functions in a program.
  - Functions are added to the stack when called (pushed).
  - Functions are removed from the stack when they complete (popped).

Let me know if you'd like more examples or further clarification!