### **Pointer Addition and Subtraction Formula**

In C, pointer arithmetic is performed based on the size of the data type the pointer is pointing to. Here's the formula for pointer addition and subtraction:

---

### **Pointer Addition Formula**

When you add an integer `n` to a pointer `ptr`, the pointer moves forward by `n` elements of the type it points to:

\[
\text{New Address} = \text{Original Address} + (n \times \text{Size of Data Type})
\]

#### **Example**
```c
int arr[] = {10, 20, 30, 40};
int *ptr = arr; // Points to arr[0]

// Pointer addition
ptr = ptr + 2; // Now points to arr[2]
```

If the base address of `arr` is `1000` (and assuming `int` size is 4 bytes):
- Original Address = `1000`
- `ptr + 2` = `1000 + (2 × 4)` = `1008`

---

### **Pointer Subtraction Formula**

When you subtract an integer `n` from a pointer `ptr`, the pointer moves backward by `n` elements of the type it points to:

\[
\text{New Address} = \text{Original Address} - (n \times \text{Size of Data Type})
\]

#### **Example**
```c
int arr[] = {10, 20, 30, 40};
int *ptr = &arr[3]; // Points to arr[3]

// Pointer subtraction
ptr = ptr - 2; // Now points to arr[1]
```

If the address of `arr[3]` is `1012` (and assuming `int` size is 4 bytes):
- Original Address = `1012`
- `ptr - 2` = `1012 - (2 × 4)` = `1004`

---

### **Pointer Difference Formula**

The difference between two pointers (`ptr2 - ptr1`) gives the number of elements between them:

\[
\text{Difference} = \frac{\text{Address of ptr2} - \text{Address of ptr1}}{\text{Size of Data Type}}
\]

#### **Example**
```c
int arr[] = {10, 20, 30, 40};
int *ptr1 = &arr[0];
int *ptr2 = &arr[3];

// Pointer difference
int diff = ptr2 - ptr1; // Number of elements between ptr1 and ptr2
```

If the addresses are:
- `ptr1` = `1000`
- `ptr2` = `1012`
- Size of `int` = `4`

\[
\text{Difference} = \frac{1012 - 1000}{4} = 3
\]

---

### **Key Points**
1. **Pointer Arithmetic Depends on Data Type:**
   - The size of the data type determines how much the pointer increments or decrements.
   - For example:
     - `int` (4 bytes): Pointer moves by 4 bytes for each increment.
     - `char` (1 byte): Pointer moves by 1 byte for each increment.

2. **Arithmetic on Void Pointers:**
   - Void pointers cannot be directly incremented or decremented because the size of the data type is unknown.

3. **Pointer Difference:**
   - Only meaningful when both pointers point to elements of the same array or block of memory.

By using these formulas, pointer arithmetic becomes predictable and aligns with memory layout in C.