### **Switch Case in C**

The `switch` statement in C is a multi-way decision-making construct. It allows a variable to be tested for equality against multiple values, and executes the corresponding block of code.

---

### **Syntax:**
```c
switch (expression) {
    case constant1:
        // Code for case constant1
        break;
    case constant2:
        // Code for case constant2
        break;
    ...
    default:
        // Code if none of the cases match
}
```

---

### **Key Points:**
1. **Expression:** The value of the `switch` expression is compared with the values in each `case`. The expression must evaluate to an integer or character type.
2. **Case Labels:** Each `case` label must be a constant value.
3. **Default:** The `default` block is optional and executes if none of the `case` labels match.
4. **Break Keyword:** The `break` statement prevents the program from "falling through" to the next case.

---

### **Does Switch Use `return`, `break`, and `exit`?**

1. **`return`:**
   - You can use `return` in a `switch` statement to exit the function and optionally return a value.
   - Example:
     ```c
     switch (x) {
         case 1:
             return 10; // Exit the function with value 10
         case 2:
             return 20; // Exit the function with value 20
         default:
             return 0;  // Exit the function with value 0
     }
     ```

2. **`break`:**
   - The `break` statement is commonly used in `switch` to exit the current case and prevent execution from continuing to subsequent cases.
   - Without `break`, the program will "fall through" to the next case, executing all subsequent cases until it encounters a `break` or the end of the `switch` block.

3. **`exit`:**
   - You can use `exit()` in a `switch` statement to terminate the program entirely.
   - Example:
     ```c
     switch (x) {
         case 1:
             printf("Exiting program.\n");
             exit(0); // Terminate the program
         case 2:
             printf("Case 2\n");
             break;
         default:
             printf("Default case\n");
     }
     ```

---

### **What Happens if You Don't Use `break`?**

If you omit the `break` statement in a `switch` case, the program will **fall through** to the next case, executing the code in subsequent cases regardless of whether their conditions match.

#### Example Without `break`:
```c
int x = 2;

switch (x) {
    case 1:
        printf("Case 1\n");
    case 2:
        printf("Case 2\n");
    case 3:
        printf("Case 3\n");
    default:
        printf("Default case\n");
}
```

**Output:**
```
Case 2
Case 3
Default case
```

#### Explanation:
- The program starts executing from `case 2` because `x` matches `2`.
- Without `break`, it continues executing `case 3` and the `default` case as well.

---

### **How to Avoid Fall-Through?**
- Use `break` after each case block unless you explicitly want fall-through behavior.
- Example with `break`:
  ```c
  int x = 2;

  switch (x) {
      case 1:
          printf("Case 1\n");
          break;
      case 2:
          printf("Case 2\n");
          break;
      case 3:
          printf("Case 3\n");
          break;
      default:
          printf("Default case\n");
  }
  ```

**Output:**
```
Case 2
```

---

### **When Is Fall-Through Useful?**
- Fall-through can be used intentionally for certain logic, such as grouping cases with similar behavior.

#### Example:
```c
char grade = 'B';

switch (grade) {
    case 'A':
    case 'B':
        printf("Good job!\n");
        break;
    case 'C':
        printf("You passed.\n");
        break;
    default:
        printf("Try harder next time.\n");
}
```

**Output:**
```
Good job!
```


---
---
---


In C, the `switch` statement accepts values of types that can be evaluated as **integral constants**. These include:

---

### **1. Integer Types**
- The `switch` expression and `case` labels can use integer values.
- Examples:
  - `int`
  - `short`
  - `long`
  - `long long`
  - `unsigned` versions of these types.

#### Example:
```c
int x = 2;
switch (x) {
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("Case 2\n");
        break;
    default:
        printf("Default case\n");
}
```

---

### **2. Character Types**
- `char` values are allowed because they are essentially small integers (ASCII values).
- Example:
```c
char ch = 'B';
switch (ch) {
    case 'A':
        printf("Case A\n");
        break;
    case 'B':
        printf("Case B\n");
        break;
    default:
        printf("Default case\n");
}
```

---

### **3. Enumerated Types (`enum`)**
- `enum` constants are treated as integers, so they are valid in `switch` cases.
- Example:
```c
enum Color { RED, GREEN, BLUE };
enum Color c = GREEN;

switch (c) {
    case RED:
        printf("Red\n");
        break;
    case GREEN:
        printf("Green\n");
        break;
    case BLUE:
        printf("Blue\n");
        break;
}
```

---

### **What Values Are Not Allowed?**

1. **Floating-Point Types**
   - `float` and `double` are not allowed in `switch` expressions or `case` labels.
   - Example (Invalid):
     ```c
     float x = 1.5;
     switch (x) { // Error: Floating-point type not allowed
         case 1.5:
             printf("Case 1.5\n");
             break;
     }
     ```

2. **Strings**
   - Strings (`char*` or `const char[]`) cannot be used in `switch` cases.
   - Example (Invalid):
     ```c
     char* str = "hello";
     switch (str) { // Error: Strings not allowed
         case "hello":
             printf("Hello\n");
             break;
     }
     ```

3. **Non-Constant Expressions**
   - Case labels must be **constant expressions**. Variables or runtime expressions are not allowed.
   - Example (Invalid):
     ```c
     int x = 5;
     int y = 10;
     switch (x) {
         case y: // Error: y is not a constant
             printf("Case y\n");
             break;
     }
     ```

---

### **Summary of Allowed Types:**
- **Integer types**: `int`, `short`, `long`, `char`, `enum`, etc.
- **Character constants**: `'A'`, `'B'`, etc.
- **Enumerated constants**: Values from `enum`.

For any other types (e.g., `float`, `double`, or strings), you need to use `if-else` instead of `switch`.