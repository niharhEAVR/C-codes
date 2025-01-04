In C, **mutability** refers to whether a variable's value can be changed (modified) after it is initialized. In C, variables are mutable by default, but mutability can be controlled through specific keywords and the type of the variable.

### 1. **Mutable Variables:**
By default, variables in C are mutable, meaning their values can be changed during program execution.

Example:
```c
int x = 10;  // x is mutable
x = 20;       // The value of x can be changed
```

In this example, the value of `x` is changed from 10 to 20, demonstrating that `x` is mutable.

### 2. **Immutable Variables (using `const` keyword):**
You can make a variable **immutable** (constant) by declaring it with the `const` keyword. A `const` variable's value cannot be changed once it is initialized.

Example:
```c
const int y = 30;  // y is immutable
y = 40;             // Error: cannot modify the value of a constant variable
```

In this example, `y` is a constant integer, and trying to modify its value will result in a compilation error.

### 3. **Pointers and Const:**
You can also use `const` with pointers to control mutability. There are two main types of `const` with pointers:

- **Pointer to a constant value**: The value pointed to by the pointer cannot be changed, but the pointer itself can be modified to point to another location.
  
  Example:
  ```c
  const int *ptr = &x;  // Pointer to a constant integer
  *ptr = 20;            // Error: cannot modify the value of x through ptr
  ptr = &y;             // Allowed: pointer can be reassigned
  ```

- **Constant pointer**: The pointer itself cannot be modified, but the value it points to can be changed.
  
  Example:
  ```c
  int *const ptr = &x;  // Constant pointer
  *ptr = 20;            // Allowed: value pointed to by ptr can be modified
  ptr = &y;             // Error: cannot change the address the pointer points to
  ```

- **Constant pointer to a constant value**: Both the pointer and the value it points to cannot be modified.
  
  Example:
  ```c
  const int *const ptr = &x;  // Constant pointer to a constant integer
  *ptr = 20;                  // Error: cannot modify the value
  ptr = &y;                   // Error: cannot modify the pointer
  ```

### 4. **Global and Local Variables:**
- **Global variables**: These are mutable by default, but you can use `const` to make them immutable.
  
  Example:
  ```c
  const int maxLimit = 100;  // Global constant variable
  ```

- **Local variables**: These are also mutable by default, and you can use `const` to make them immutable within their scope.

### 5. **Arrays and Const:**
You can also use `const` with arrays to make the elements of the array immutable.

Example:
```c
const int arr[] = {1, 2, 3};  // Array of constant integers
arr[0] = 10;                  // Error: cannot modify the array elements
```

### Summary of Mutability in C:
- **Mutable variables**: By default, variables in C are mutable and can be modified after initialization.
- **Immutable variables**: Use the `const` keyword to declare variables whose values cannot be modified.
- **Pointers and `const`**: You can control mutability of the pointer itself and the value it points to using `const`.

In C, mutability is controlled primarily by the `const` keyword, and it allows you to enforce read-only access to variables or data, improving program stability and preventing unintended modifications.