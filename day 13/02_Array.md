### **What is an Array?**

An **array** is a data structure that stores a collection of elements, all of the same type, in a contiguous block of memory. Arrays are useful when you need to store multiple values of the same type and access them efficiently using an index.

### **Array Declaration in C**

In C, an array is declared by specifying the type of its elements, followed by the name of the array and the number of elements (size) it will hold. The size of the array must be a constant expression.

#### **Syntax**:
```c
type array_name[size];
```

- **`type`**: The data type of the elements (e.g., `int`, `char`, `float`).
- **`array_name`**: The name of the array.
- **`size`**: The number of elements the array can hold.

#### **Example**:
```c
int arr[5];  // Declares an array of 5 integers
```

### **Size of an Array (`sizeof` Array)**

In C, the **`sizeof`** operator is used to determine the size of an array. It gives the total number of bytes the array occupies in memory.

#### **Formula**:
```c
sizeof(array) = size_of_element * number_of_elements
```

#### **Example**:
```c
int arr[5];
printf("Size of array: %lu\n", sizeof(arr));  // Output: 20 (assuming int is 4 bytes)
```

- Here, `sizeof(arr)` gives the total memory occupied by the array, which is `5 * 4 = 20` bytes (assuming `int` is 4 bytes on the system).

To get the number of elements in the array, you can divide the total size by the size of one element:
```c
int num_elements = sizeof(arr) / sizeof(arr[0]);
```

### **Logical View of an Array**

In an array, the elements are stored **contiguously** in memory. This means that the memory locations of array elements are adjacent to each other.

#### **Logical View Example**:
For an array `arr[5] = {10, 20, 30, 40, 50}`:

| Index | 0  | 1  | 2  | 3  | 4  |
|-------|----|----|----|----|----|
| Value | 10 | 20 | 30 | 40 | 50 |

- The elements are stored in consecutive memory locations, starting from `arr[0]`.

### **Indexing of an Array**

In C, array indexing starts from **0**. The first element of the array is accessed using `arr[0]`, the second element with `arr[1]`, and so on.

#### **Example**:
```c
int arr[5] = {10, 20, 30, 40, 50};
printf("%d\n", arr[2]);  // Output: 30 (third element, index 2)
```

### **Memory Location Used by Arrays**

Arrays in C use **contiguous memory locations**. When an array is declared, the compiler allocates a contiguous block of memory large enough to store all the elements of the array.

- For an array of size `n`, the memory block will be `n * sizeof(type)` bytes.
- The array's name (e.g., `arr`) is a **pointer** to the first element of the array (`arr[0]`), and you can use pointers to access array elements.

#### **Example**:
```c
int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr;  // ptr points to arr[0]
printf("%d\n", *(ptr + 2));  // Output: 30 (third element)
```

### **Searching Operation on Arrays**

There are several ways to search for an element in an array:

1. **Linear Search**: Check each element of the array one by one until you find the element.

#### **Example** (Linear Search):
```c
int arr[5] = {10, 20, 30, 40, 50};
int search_value = 30;
int found = 0;

for (int i = 0; i < 5; i++) {
    if (arr[i] == search_value) {
        found = 1;
        printf("Element found at index %d\n", i);
        break;
    }
}

if (!found) {
    printf("Element not found\n");
}
```

2. **Binary Search**: For sorted arrays, binary search is more efficient. It repeatedly divides the search interval in half.

### **Rules for Storing Values in an Array in C**

1. **Fixed Size**: The size of the array must be specified at the time of declaration (except for dynamic arrays).
2. **Contiguous Memory**: Array elements are stored in contiguous memory locations.
3. **Indexing Starts from 0**: The first element of the array is at index `0`, and the last element is at `size-1`.
4. **Data Type Consistency**: All elements of an array must be of the same data type.
5. **Out-of-Bounds Access**: Accessing an element outside the array bounds (e.g., `arr[5]` in a 5-element array) results in **undefined behavior**.
6. **Default Initialization**: For global and static arrays, elements are initialized to zero by default. Local arrays are not initialized and contain garbage values if not explicitly initialized.

#### **Example**:
```c
int arr[3] = {10, 20, 30};  // Array with 3 elements
arr[0] = 100;  // Modify the first element
printf("%d\n", arr[0]);  // Output: 100
```

---

### **Summary**
- **Array**: A collection of elements of the same type stored in contiguous memory locations.
- **Array Declaration**: `type array_name[size]`, where `type` is the data type, `array_name` is the name, and `size` is the number of elements.
- **`sizeof` Array**: Determines the total memory occupied by the array.
- **Logical View**: Array elements are stored sequentially, starting from index 0.
- **Indexing**: Array elements are accessed using indices starting from 0.
- **Memory Location**: Arrays use contiguous memory locations, and the name of the array is a pointer to the first element.
- **Searching**: Linear search or binary search (for sorted arrays) can be used to find an element.
- **Array Value Storing Rules**: Arrays have fixed sizes, elements are of the same type, and they must be accessed within bounds.

---
---
---



### **Default Initialization of Arrays in C**

In C, the initialization of arrays depends on where they are declared (global, static, or local). Here's how the default initialization works for each case:

### **1. Global and Static Arrays**
- **Global Arrays**: These are arrays declared outside any function, typically at the top of a file.
- **Static Arrays**: These are arrays declared inside a function with the `static` keyword.

#### **Default Initialization**:
- **Global and static arrays** are automatically initialized to **zero** if no explicit initialization is provided. This means that every element in the array will have a value of `0`.

#### **Example**:
```c
#include <stdio.h>

int global_arr[5];  // Global array, default initialized to 0

void function() {
    static int static_arr[5];  // Static array, default initialized to 0
    printf("Global array first element: %d\n", global_arr[0]);
    printf("Static array first element: %d\n", static_arr[0]);
}

int main() {
    function();
    return 0;
}
```
**Output**:
```
Global array first element: 0
Static array first element: 0
```

- Here, both `global_arr` and `static_arr` are initialized to `0` by default, even though we did not explicitly assign any values to them.

### **2. Local Arrays**
- **Local Arrays**: These are arrays declared inside a function without the `static` keyword.

#### **Default Initialization**:
- **Local arrays** are **not initialized by default**. If you don't explicitly initialize them, the elements contain **garbage values** (random values from memory).
  
#### **Example**:
```c
#include <stdio.h>

void function() {
    int local_arr[5];  // Local array, no default initialization
    printf("Local array first element: %d\n", local_arr[0]);
}s

int main() {
    function();
    return 0;
}
```
**Output**:
```
Local array first element: (garbage value)
```

- The value of `local_arr[0]` is unpredictable because it was not initialized. It will contain whatever data was previously in that memory location, which is referred to as **garbage**.

### **Summary of Default Initialization**:
- **Global and static arrays**: Automatically initialized to zero.
- **Local arrays**: Not initialized by default; they contain garbage values unless explicitly initialized.