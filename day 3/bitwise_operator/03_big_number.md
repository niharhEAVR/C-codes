The **left shift operation** (`<<`) is generally possible for "big numbers," but the behavior depends on:

1. **Data type limitations** (e.g., `int`, `long`).
2. The programming language and compiler handling of shift operations.
3. The number of bits you are shifting.

---

### 1. **Left Shift and Data Type Limitations**
The left shift operator (`<<`) shifts the bits of a number to the left, filling the vacated bits with zeros. However, for large numbers, problems can arise due to:

- **Bit Width of Data Types:** Each data type (e.g., `int`, `long`) has a fixed number of bits (e.g., 32-bit or 64-bit). If the shift operation exceeds the maximum bit width, bits are lost, or undefined behavior may occur.
  
  **Example (C/C++):**
  ```c
  int num = 1;  // 32-bit signed integer
  int result = num << 31; // Shifts to the maximum bit position (valid)
  int overflow = num << 32; // Undefined behavior!
  ```
  In this case:
  - `num << 31` is valid.
  - `num << 32` is invalid for a 32-bit `int` because the shift count equals the bit width.

---

### 2. **Big Numbers in Large Data Types**
If you use data types like `long long` (64-bit) or custom big number libraries (e.g., `BigInt` in Python/Java), left shifts are possible for very large numbers:

- In Python, **integers have arbitrary precision**, so left shifting is always possible.
  
  **Example:**
  ```python
  num = 1
  result = num << 1000  # Shifting 1000 places, possible in Python
  print(result)  # Outputs a very large number
  ```

- In C/C++, once you exceed the maximum bit width of the data type, the behavior is undefined.

---

### 3. **Shifting Beyond Limits**
If the shift count exceeds the number of bits in the data type:
- **C/C++:** Shifting beyond the width of the data type results in **undefined behavior**.
- **Python:** Handles it seamlessly because of arbitrary precision.
- **Java:** Shifts are implicitly masked to the data type width:
  - For a 32-bit `int`, the shift is effectively `shift % 32`.
  - For a 64-bit `long`, the shift is `shift % 64`.

---

### Conclusion:
1. **Yes, left shift is possible for big numbers, but:**
   - You need to handle large numbers carefully when using fixed-width types like `int` or `long`.
   - In languages like Python or Java (with `BigInteger`), there are no inherent limits due to their support for arbitrary precision.

2. For guaranteed correct behavior with big numbers:
   - Use a library like `BigInt` in JavaScript or Python.
   - Ensure the shift count does not exceed the data type’s bit width in languages like C/C++.