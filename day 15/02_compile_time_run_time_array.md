In C, the terms **compile-time array** and **runtime array** refer to when and how the size of an array is determined: during **compilation** or **execution**.

### **1. Compile-Time Array**

A **compile-time array** is an array whose size is known and fixed at the time of compilation, before the program starts executing. The size of the array must be a constant expression that can be evaluated by the compiler.

#### **Key Characteristics**:
- The array size is **determined at compile time**.
- The size must be a **constant expression** (i.e., a value that can be evaluated by the compiler, such as a literal number or a `#define` constant).
- The array is allocated **statically** in memory.

#### **Example**:
```c
#include <stdio.h>

#define SIZE 5  // Constant size defined at compile time

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};  // Compile-time array
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```
- In this example, the array `arr` is a **compile-time array** because its size `SIZE` is determined at compile time by the preprocessor macro `#define SIZE 5`.

#### **Memory Allocation**:
- The memory for a compile-time array is allocated **statically** in the program's data segment, and its size cannot change during execution.

### **2. Runtime Array**

A **runtime array** is an array whose size is **determined during program execution** (i.e., at runtime). The size can be based on user input or any value that is not known until the program runs.

#### **Key Characteristics**:
- The array size is **determined at runtime**, meaning it can be calculated or assigned during the execution of the program.
- The array is typically allocated **dynamically** in memory using **dynamic memory allocation** functions like `malloc()` or `calloc()`.

#### **Example**:
```c
#include <stdio.h>
#include <stdlib.h>  // For malloc

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);  // Size is determined at runtime

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize and print the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    // Free the dynamically allocated memory
    free(arr);
    return 0;
}
```
- In this example, the size of the array `arr` is determined at **runtime** based on user input (`n`), and memory is allocated dynamically using `malloc()`.

#### **Memory Allocation**:
- The memory for a runtime array is allocated **dynamically** at runtime, typically on the heap. The size of the array can change during execution, and you can allocate or free memory as needed.

### **Key Differences Between Compile-Time and Runtime Arrays**:

| **Aspect**             | **Compile-Time Array**                     | **Runtime Array**                      |
|------------------------|--------------------------------------------|----------------------------------------|
| **Size Determination**  | Known at **compile time**                  | Known at **runtime**                   |
| **Memory Allocation**   | **Static** allocation (on stack or data segment) | **Dynamic** allocation (on heap)      |
| **Flexibility**         | Size is fixed, cannot change during execution | Size can change during execution      |
| **Example**             | `int arr[5];`                             | `int *arr = malloc(n * sizeof(int));`  |
| **Memory Management**   | No need for explicit memory management     | Requires explicit memory management (e.g., `malloc()` and `free()`) |

### **Summary**:
- **Compile-time arrays** have a size known at the time of compilation, and their memory is allocated statically.
- **Runtime arrays** have a size that is determined at runtime, and their memory is allocated dynamically, allowing for more flexibility.