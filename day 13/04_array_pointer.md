In C, **arrays are closely related to pointers**, but they are not exactly the same. Here's a short explanation of what it means when we say "an array is a pointer":

### **Array as a Pointer**

- When you declare an array in C, such as:
  ```c
  int arr[5] = {1, 2, 3, 4, 5};
  ```
  The name of the array (`arr`) is essentially a **pointer to the first element** of the array. So, `arr` points to the memory location where the first element (`arr[0]`) is stored.

### **Key Points**:
1. **Array Name as a Pointer**: The array name (`arr`) can be used like a pointer that points to the first element. It stores the address of the first element of the array.
   
   - `arr` is equivalent to `&arr[0]`, the address of the first element.

2. **Accessing Elements**: You can access array elements using the array index or pointer arithmetic.
   
   - `arr[0]` is the same as `*(arr + 0)`, where `arr` is a pointer to the first element.

3. **Constant Pointer**: Although `arr` behaves like a pointer, it is not a **modifiable pointer**. This means you cannot change the address that `arr` points to (e.g., `arr = some_other_address;` is not allowed). However, you can modify the elements of the array.

### **Example**:
```c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    
    // Using array indexing
    printf("%d\n", arr[0]);  // Output: 10
    
    // Using pointer arithmetic
    printf("%d\n", *(arr + 0));  // Output: 10 (same as arr[0])
    
    // Using pointer to modify elements
    *(arr + 1) = 50;  // Changes arr[1] to 50
    printf("%d\n", arr[1]);  // Output: 50
    
    return 0;
}
```

### **Conclusion**:
- The array name (`arr`) is a pointer to the first element, and you can use pointer arithmetic to access array elements.
- However, arrays in C are **not true pointers** because their size is fixed, and you cannot change their memory address after initialization.