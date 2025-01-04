### **What is a 2D Array?**

A **2D array** (two-dimensional array) is an array of arrays. It can be thought of as a table with rows and columns, where each element is accessed by two indices: one for the row and one for the column.

#### **Syntax for Declaration**:
```c
type array_name[row_size][column_size];
```
- **`type`**: The data type of the elements (e.g., `int`, `char`).
- **`array_name`**: The name of the 2D array.
- **`row_size`**: The number of rows in the array.
- **`column_size`**: The number of columns in the array.

#### **Example**:
```c
int arr[3][4];  // 2D array with 3 rows and 4 columns
```

### **How 2D Arrays Work**

A 2D array is essentially an array of arrays. Each element of the 2D array is an array itself (a 1D array), and these 1D arrays are stored in contiguous memory locations.

For example, for a 2D array `arr[3][4]`, it has 3 rows and 4 columns:
```
arr[0][0], arr[0][1], arr[0][2], arr[0][3]
arr[1][0], arr[1][1], arr[1][2], arr[1][3]
arr[2][0], arr[2][1], arr[2][2], arr[2][3]
```

- The array `arr` is a collection of 3 rows, and each row is a 1D array of 4 integers.
- Elements are accessed using two indices: the first for the row and the second for the column.

#### **Example**:
```c
#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Accessing elements
    printf("%d\n", arr[0][0]);  // Output: 1 (first element)
    printf("%d\n", arr[2][3]);  // Output: 12 (last element)
    
    return 0;
}
```

### **Size of a 2D Array**

The size of a 2D array is the total number of elements it contains, which is the product of the number of rows and columns.

#### **Formula**:
```
Size of 2D array = row_size * column_size * size_of_element
```

- For `arr[3][4]` (3 rows, 4 columns), if each element is of type `int` (typically 4 bytes on most systems), the size of the array would be:
  ```c
  sizeof(arr) = 3 * 4 * sizeof(int) = 3 * 4 * 4 = 48 bytes
  ```

#### **Example**:
```c
int arr[3][4];
printf("Size of 2D array: %lu\n", sizeof(arr));  // Output: 48 bytes (if int is 4 bytes)
```

### **Memory Representation of a 2D Array**

In memory, a 2D array is stored **row-major order**, meaning that the elements of each row are stored in contiguous memory locations, one after another.

#### **Example**:
For the 2D array `arr[3][4]`:
```c
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

The memory representation (in row-major order) would look like this:
```
Memory: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
```

- **Row 1** (`arr[0]`): `1, 2, 3, 4`
- **Row 2** (`arr[1]`): `5, 6, 7, 8`
- **Row 3** (`arr[2]`): `9, 10, 11, 12`

### **Accessing Elements in a 2D Array**

You can access the elements using two indices: the row index and the column index.

#### **Syntax**:
```c
array_name[row_index][column_index]
```

#### **Example**:
```c
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

printf("%d\n", arr[1][2]);  // Output: 7 (element at row 1, column 2)
```

### **Pointers and 2D Arrays**

A 2D array can also be treated as an array of pointers. Each row of the array is a pointer to the first element of that row.

For example:
```c
int arr[3][4];
int *ptr = &arr[0][0];  // Pointer to the first element of the array
```

You can also access elements using pointer arithmetic:
```c
printf("%d\n", *(ptr + 2));  // Accesses arr[0][2] (third element in the first row)
```

### **Summary of 2D Array Concepts**:
- A **2D array** is an array of arrays, where each element can be accessed using two indices: row and column.
- **Memory representation** is row-major, meaning elements of each row are stored contiguously in memory.
- **Size of a 2D array** is calculated as `row_size * column_size * size_of_element`.
- **Accessing elements** uses the syntax `array[row_index][column_index]`, and pointers can also be used for access.

