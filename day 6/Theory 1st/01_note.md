

### **1. If-Else Statement in C**

The `if-else` statement is a conditional control structure that executes one block of code if a condition is true and another block if the condition is false.

#### Syntax:
```c
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}
```

#### Example:
```c
int x = 10;
if (x > 5) {
    printf("x is greater than 5");
} else {
    printf("x is not greater than 5");
}
```

---

### **2. Ladder if-else**

The **if-else ladder** allows checking multiple conditions one after another. It is a chain of `if-else` statements where each `else` block contains another `if`.

#### Syntax:
```c
if (condition1) {
    // Code for condition1
} else if (condition2) {
    // Code for condition2
} else if (condition3) {
    // Code for condition3
} else {
    // Code if none of the conditions are true
}
```

#### Example:
```c
int marks = 75;
if (marks >= 90) {
    printf("Grade: A");
} else if (marks >= 75) {
    printf("Grade: B");
} else if (marks >= 50) {
    printf("Grade: C");
} else {
    printf("Grade: F");
}
```

---

### **3. Nested if-else**

A **nested if-else** is when an `if` or `else` block contains another `if-else` statement.

#### Syntax:
```c
if (condition1) {
    if (condition2) {
        // Code for condition1 and condition2
    } else {
        // Code for condition1 but not condition2
    }
} else {
    // Code if condition1 is false
}
```

#### Example:
```c
int x = 10, y = 20;
if (x > 0) {
    if (y > 15) {
        printf("x is positive and y is greater than 15");
    } else {
        printf("x is positive but y is not greater than 15");
    }
} else {
    printf("x is not positive");
}
```

---

### **4. Ternary Operator (Conditional Operator)**

The **ternary operator** is a shorthand for `if-else`. It uses the syntax:
```c
(condition) ? expression1 : expression2;
```

- If the condition is true, `expression1` is evaluated.
- If the condition is false, `expression2` is evaluated.

#### Example:
```c
int x = 10;
int y = (x > 5) ? 100 : 200; // y = 100 because x > 5
printf("y = %d", y);
```

---

### **5. Does `if-else` return or break?**

- **`if-else` does not inherently `return` or `break`.**
  - **Return:** The `return` statement is used to exit a function and optionally return a value.
  - **Break:** The `break` statement is used to exit loops or `switch` cases prematurely.

However, you can use `return` or `break` inside an `if-else` block if required.

#### Example with `return`:
```c
int checkNumber(int x) {
    if (x > 0) {
        return 1; // Exit function with a value
    } else {
        return -1; // Exit function with a different value
    }
}
```

#### Example with `break`:
```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // Exit the loop
    }
    printf("%d ", i);
}
```

**In summary:**
- `if-else` is purely a control structure to manage code flow.
- It does not inherently `return` or `break`, but you can include those statements inside its blocks.


---
---
---
---



Yes, you can use the `exit()` function inside an `if-else` statement in C. The `exit()` function is used to terminate the program immediately, regardless of where it is called.

### **Syntax of `exit()`**
```c
#include <stdlib.h>

void exit(int status);
```

- The `status` parameter is an integer that indicates the exit status of the program:
  - `0` typically indicates successful termination.
  - Non-zero values (e.g., `1`) indicate abnormal termination or an error.

### **Using `exit()` in `if-else`**
You can call `exit()` within an `if` or `else` block to terminate the program based on a condition.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = -1;

    if (number < 0) {
        printf("Error: Negative number detected. Exiting program.\n");
        exit(1); // Terminate the program with an error status
    } else {
        printf("Number is positive.\n");
    }

    printf("This line will not be executed if exit() is called.\n");
    return 0;
}
```

### **Behavior of `exit()`**
- When `exit()` is called, the program stops executing immediately.
- It performs cleanup tasks, such as flushing output buffers and closing open files, before terminating.

---

### **When to Use `exit()`**
- Use `exit()` for error handling in situations where continuing execution is not possible or meaningful (e.g., critical errors).
- Avoid overusing `exit()` in large programs, as it can make debugging and control flow harder to manage.

#### Example in Nested `if-else`:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5, b = 0;

    if (b == 0) {
        printf("Division by zero is not allowed. Exiting program.\n");
        exit(1);
    } else {
        printf("Result: %d\n", a / b);
    }

    return 0;
}
```