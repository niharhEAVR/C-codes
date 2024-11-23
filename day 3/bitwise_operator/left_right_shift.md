In C, **left shift (`<<`)** and **right shift (`>>`)** are **bitwise shift operators**. They shift the binary representation of a number to the left or right by a specified number of positions.

---

### **1. Left Shift (`<<`)**

- **What it does:**
  - Shifts the binary representation of a number to the **left** by a specified number of bits.
  - For each shift to the left:
    - A `0` is added to the rightmost bit.
    - The leftmost bit is discarded.

- **Effect:**
  - A left shift by `n` bits multiplies the number by \( 2^n \).

#### **Example: `5 << 2`**

1. **Binary of `5`**:  
   ```
   00000101
   ```

2. Shift it **2 bits to the left**:  
   ```
   00010100
   ```

3. **Decimal equivalent**:  
   ```
   00010100 = 20
   ```

Output of `5 << 2`: `20`

---

### **2. Right Shift (`>>`)**

- **What it does:**
  - Shifts the binary representation of a number to the **right** by a specified number of bits.
  - For each shift to the right:
    - The rightmost bit is removed.
    - The leftmost bit depends on the type of number:
      - For **unsigned numbers**, `0` is added to the left.
      - For **signed numbers**, the leftmost bit is filled with the **sign bit** (arithmetic shift).

- **Effect:**
  - A right shift by `n` bits divides the number by \( 2^n \) (integer division, truncates the result).

#### **Example: `5 >> 2`**

1. **Binary of `5`**:  
   ```
   00000101
   ```

2. Shift it **2 bits to the right**:  
   ```
   00000001
   ```

3. **Decimal equivalent**:  
   ```
   00000001 = 1
   ```

Output of `5 >> 2`: `1`

---

### **Summary of the Program**
```c
#include<stdio.h>
int main()
{
    printf("%d", 5<<2);  // Output: 20
    printf("%d", 5>>2);  // Output: 1
    return 0;
}
```

---

### **Key Points to Remember**
1. **Left shift (`<<`)**: Multiplies by \( 2^n \).
2. **Right shift (`>>`)**: Divides by \( 2^n \) (integer division).
3. These operations are fast because they work directly on the binary representation of numbers.