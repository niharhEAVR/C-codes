The terminology **"entry-controlled"** and **"exit-controlled"** loops refers to when the condition of the loop is checked relative to the execution of the loop body:

### **1. Entry-Controlled Loops**
- **Definition**: In **entry-controlled loops**, the loop's condition is checked **before** the loop body is executed. If the condition is false initially, the loop body may not be executed at all.
- **Examples**: `for` loop and `while` loop.
  
#### **Why Called Entry-Controlled?**
- The loop condition is checked **at the entry point** of the loop (before the first execution of the loop body).
- If the condition evaluates to **false** on the first check, the loop body will not execute at all.
  
#### **Examples**:
- **`while` loop**:
  ```c
  while (condition) {
      // Code to execute
  }
  ```
  - The condition is checked before entering the loop body. If `condition` is false initially, the body of the loop is never executed.
  
- **`for` loop**:
  ```c
  for (initialization; condition; update) {
      // Code to execute
  }
  ```
  - Similar to the `while` loop, the condition is checked before the loop body runs. If `condition` is false initially, the loop body is skipped.

---

### **2. Exit-Controlled Loop**
- **Definition**: In **exit-controlled loops**, the loop's condition is checked **after** the loop body is executed. This means the loop body is guaranteed to execute at least once, even if the condition is false.
- **Example**: `do-while` loop.

#### **Why Called Exit-Controlled?**
- The condition is checked **after** the loop body has executed, meaning the loop body is executed **at least once** before the condition is evaluated.
- If the condition is false after the first execution, the loop will exit.

#### **Example**:
- **`do-while` loop**:
  ```c
  do {
      // Code to execute
  } while (condition);
  ```
  - The loop body is executed first, and then the condition is checked. If `condition` is false after the first iteration, the loop will exit. 

---

### **Key Differences Between Entry-Controlled and Exit-Controlled Loops**

| **Feature**             | **Entry-Controlled Loops**                | **Exit-Controlled Loops**               |
|-------------------------|-------------------------------------------|-----------------------------------------|
| **Condition Check**      | Condition is checked **before** the loop body executes. | Condition is checked **after** the loop body executes. |
| **Examples**             | `while`, `for` loops                      | `do-while` loop                        |
| **Loop Execution**       | If the condition is false initially, the loop body may not execute. | The loop body is executed **at least once**, even if the condition is false. |
| **Use Case**             | Used when you need to repeat a block of code as long as a condition is true, and you may want to skip execution if the condition is false initially. | Used when you want the loop body to run at least once, regardless of the condition. |

---

### **Summary**
- **Entry-Controlled Loops** (`while`, `for`): The condition is checked before the loop starts, so if the condition is false initially, the loop body might not run.
- **Exit-Controlled Loop** (`do-while`): The condition is checked after the loop body runs, so the loop body is guaranteed to run at least once.