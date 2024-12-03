Bitwise operators perform operations on the binary representation of integers. Let's break down the code and the bitwise operators used:

---

### **Code Explanation**
```c
#include<stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    printf("%d\n",a&b);
    int c = 1;
    int d = 2;
    printf("%d\n",c|d);
    int e = 3;
    printf("%d\n",~e);
    int f = 1;
    int g = 2;
    printf("%d",f^g);
    return 0;
}
```

---

### **1. `&` (Bitwise AND)**

- Performs a logical AND operation on each corresponding pair of bits in the binary representations of the two numbers.
- **Binary of `1`**: `01`  
- **Binary of `2`**: `10`  
- Operation:  
  ```
  01 (binary of 1)
  &
  10 (binary of 2)
  -----
  00 (result is 0)
  ```

Output: `0`

---

### **2. `|` (Bitwise OR)**

- Performs a logical OR operation on each corresponding pair of bits in the binary representations of the two numbers.
- **Binary of `1`**: `01`  
- **Binary of `2`**: `10`  
- Operation:  
  ```
  01 (binary of 1)
  |
  10 (binary of 2)
  -----
  11 (result is 3 in decimal)
  ```

Output: `3`

---

Let me explain the **Bitwise NOT (`~`)** in a simpler way.

---

### **What does `~` (NOT) do?**
- The `~` operator flips all the bits in the binary representation of a number:
  - `1` becomes `0`.
  - `0` becomes `1`.

In C, integers are represented using **two's complement notation**. This means:
1. The leftmost bit represents the **sign**:
   - `0` → Positive.
   - `1` → Negative.
2. For negative numbers:
   - The binary is stored as the **two's complement** of the number.



### **Step-by-Step Explanation for `~3`**

1. Start with `3` in **binary** (assume 8-bit for clarity):  
   ```
   00000011
   ```

2. Apply the `~` operator to flip all the bits:  
   ```
   11111100
   ```

   This result is still in binary form, but it represents a **negative number** in two's complement.

3. To find the decimal value of `11111100`:
   - Take the two's complement:
     - **Step 1:** Invert all bits back:  
       ```
       00000011
       ```
     - **Step 2:** Add `1`:  
       ```
       00000100
       ```
     - This is `4` in decimal.

   - Since the original binary starts with `1` (negative sign), the result is `-4`.



### **Why Two's Complement?**
Two's complement is used in computers to represent negative numbers because:
- It simplifies arithmetic operations (addition and subtraction).
- Only one representation exists for `0`.



### **Final Answer**
The operation `~3` flips all the bits of `3` (`00000011` → `11111100`), which corresponds to `-4` in decimal.

---

### **4. `^` (Bitwise XOR)**

- Performs a logical XOR (exclusive OR) operation on each corresponding pair of bits.
  - The result is `1` if the bits are different and `0` if they are the same.
- **Binary of `1`**: `01`  
- **Binary of `2`**: `10`  
- Operation:  
  ```
  01 (binary of 1)
  ^
  10 (binary of 2)
  -----
  11 (result is 3 in decimal)
  ```

Output: `3`

---

### **Output of the Program**
```
0
3
-4
3
```