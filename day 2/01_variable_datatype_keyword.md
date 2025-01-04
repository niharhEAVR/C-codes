

In C programming, the terms **variable**, **datatype**, and **keyword** have specific meanings:

### 1. **Variable:**
A variable is a named storage location in memory that holds a value. The value stored in a variable can change during the program's execution. Each variable in C must be declared with a specific type (datatype), and it can hold data of that type.

Example:
```c
int age = 25;  // 'age' is a variable of type 'int' holding the value 25
```

### 2. **Datatype:**
A datatype in C defines the type of data a variable can hold. It specifies the size of the variable in memory and the operations that can be performed on it. Some common datatypes in C are:
- `int`: Used for integers (whole numbers).
- `float`: Used for floating-point numbers (decimals).
- `char`: Used for single characters.
- `double`: Used for double-precision floating-point numbers.
- `void`: Represents the absence of a value (used for functions that do not return a value).

Example:
```c
int num = 10;       // 'int' is the datatype
float pi = 3.14;    // 'float' is the datatype
```

### 3. **Keyword:**
A keyword is a reserved word in C that has a special meaning and cannot be used as an identifier (such as a variable name). Keywords are part of the C language syntax and are predefined by the language. Some common C keywords include:
- `int`, `float`, `char`: Datatypes.
- `if`, `else`, `while`: Control flow statements.
- `return`: Used to return a value from a function.
- `void`: Represents no value or function return type.

Example:
```c
int main() {  // 'int' is a keyword used for return type
    return 0;  // 'return' is a keyword
}
```

In summary:
- **Variable**: A name for a memory location that holds data.
- **Datatype**: Specifies the type of data a variable can hold.
- **Keyword**: A reserved word with a special meaning in the language.


---
---
---
---




In C, datatypes are classified into several categories based on the kind of data they represent. These categories include:

### 1. **Basic (Primitive) Datatypes:**
These are the most fundamental types, directly supported by the language.

- **`int`**: Used for integer values (whole numbers).
- **`float`**: Used for single-precision floating-point numbers (decimals).
- **`double`**: Used for double-precision floating-point numbers (decimals with higher precision than `float`).
- **`char`**: Used for storing single characters (e.g., 'a', '1').

### 2. **Derived Datatypes:**
These are types derived from the basic datatypes.

- **Array**: A collection of elements of the same type.
  Example: `int arr[5];` (an array of 5 integers)
- **Pointer**: A variable that stores the memory address of another variable.
  Example: `int *ptr;` (pointer to an integer)
- **Structure**: A user-defined datatype that groups different types of variables under one name.
  Example:
  ```c
  struct Person {
      char name[50];
      int age;
  };
  ```
- **Union**: Similar to a structure, but it allows storing different types in the same memory location, only one at a time.
  Example:
  ```c
  union Data {
      int i;
      float f;
  };
  ```

### 3. **Enumeration (Enum):**
An enumeration is a user-defined datatype that consists of integral constants. It is used to assign names to integral values, which makes the program easier to read.

Example:
```c
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
```

### 4. **Void Datatype:**
The `void` datatype represents the absence of a value. It is commonly used for functions that do not return a value.

Example:
```c
void myFunction() {
    // Function does not return anything
}
```

### 5. **Qualifiers (Modifiers) for Basic Datatypes:**
These are used to modify the size or behavior of the basic datatypes.

- **`signed`**: Indicates that the datatype can store both positive and negative values.
- **`unsigned`**: Indicates that the datatype can only store positive values.
- **`long`**: Used to increase the size of the datatype.
- **`short`**: Used to decrease the size of the datatype.

Examples:
- `unsigned int` (positive integers only)
- `long int` (larger integer size)
- `short int` (smaller integer size)

### Summary of Datatypes in C:
1. **Basic Datatypes**:
   - `int`
   - `float`
   - `double`
   - `char`

2. **Derived Datatypes**:
   - Arrays
   - Pointers
   - Structures
   - Unions

3. **Enumeration (Enum)**

4. **Void Datatype** (`void`)

5. **Modifiers**:
   - `signed`, `unsigned`, `long`, `short`



---
---
---

The size of datatypes in C depends on the system architecture (such as 32-bit or 64-bit) and the compiler being used. However, there are typical sizes for common datatypes on most systems:

### 1. **Integer Types (`int`, `short`, `long`, etc.)**
- **`char`**: 1 byte (8 bits)  
  - Used to store a single character or small integer values.
- **`short`**: 2 bytes (16 bits)  
  - Typically used for small integers.
- **`int`**: 4 bytes (32 bits)  
  - The most common integer type for storing whole numbers.
- **`long`**: 4 bytes (32 bits) on 32-bit systems, 8 bytes (64 bits) on 64-bit systems  
  - Used for larger integers.
- **`long long`**: 8 bytes (64 bits)  
  - Used for even larger integers.

### 2. **Floating-Point Types**
- **`float`**: 4 bytes (32 bits)  
  - Used for single-precision floating-point numbers (decimals).
- **`double`**: 8 bytes (64 bits)  
  - Used for double-precision floating-point numbers (decimals with more precision).
- **`long double`**: 8 bytes (64 bits) on some systems, 12 or 16 bytes (96 or 128 bits) on others  
  - Used for extended-precision floating-point numbers.

### 3. **Other Types**
- **`void`**: No size  
  - The `void` type represents an absence of data and is used for functions that do not return a value.

### Example Sizes on a Typical 64-bit System (with GCC compiler):
| Datatype        | Size (bytes) |
|-----------------|--------------|
| `char`          | 1            |
| `short`         | 2            |
| `int`           | 4            |
| `long`          | 8            |
| `long long`     | 8            |
| `float`         | 4            |
| `double`        | 8            |
| `long double`   | 16           |

### Modifiers (Signed/Unsigned):
- **`unsigned`** types have the same size as their signed counterparts but can store only positive values.
- **`signed`** types can store both positive and negative values, and their size is the same as the unsigned version.

### Important Notes:
- The size of datatypes may vary based on the system's architecture and the compiler used (e.g., GCC, MSVC).
- Use the `sizeof()` operator in C to determine the size of any datatype or variable on your specific system.

Example:
```c
printf("Size of int: %lu bytes\n", sizeof(int));
```


---
---
---


In C, user-defined datatypes allow you to create new types based on existing ones. These types can be used to structure data in a more meaningful way. The common user-defined datatypes include **struct**, **union**, **enum**, and **typedef**.

Here's a detailed look at the sizes of user-defined datatypes:

### 1. **Structure (`struct`)**:
A structure is a user-defined datatype that groups together variables of different data types under one name. The size of a structure is the sum of the sizes of its individual members, but it may be padded for alignment purposes.

Example:
```c
struct Person {
    char name[50];  // 50 bytes
    int age;        // 4 bytes
    float height;   // 4 bytes
};
```

- **Size of `struct Person`**: The size will be the sum of the sizes of `name`, `age`, and `height`, but it may be larger due to padding for memory alignment (often 4 or 8 bytes depending on the system). In this case, it could be **56 bytes** (50 + 4 + 4) on a 64-bit system with typical padding.

### 2. **Union (`union`)**:
A union is similar to a structure, but it allows storing different data types in the same memory location, using the same memory space for all its members. The size of a union is the size of its largest member.

Example:
```c
union Data {
    int i;      // 4 bytes
    float f;    // 4 bytes
    char c;     // 1 byte
};
```

- **Size of `union Data`**: The size of this union will be the size of the largest member, which is either `int` or `float`, both of which are typically **4 bytes** on most systems.

### 3. **Enumeration (`enum`)**:
An enumeration is a user-defined datatype consisting of integral constants. By default, the size of an enum is the size of an `int` (typically 4 bytes on most systems), but the underlying type can be changed to save space, depending on the compiler.

Example:
```c
enum Week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
```

- **Size of `enum Week`**: Typically **4 bytes** on most systems (the size of `int`), but it can vary if the compiler uses a smaller underlying type.

### 4. **Typedef**:
The `typedef` keyword is used to create an alias for an existing datatype. It does not change the size of the datatype, but it simplifies the code by allowing you to use a shorter name or a more meaningful name for complex types.

Example:
```c
typedef unsigned long long ull;  // 'ull' is now an alias for 'unsigned long long'
typedef struct Person Person;    // 'Person' is now an alias for the struct type
```

- **Size of `typedef`**: The size of a typedef depends on the type it is aliasing. For example, `ull` would have the same size as `unsigned long long`, which is typically **8 bytes**.

### Summary of Sizes for User-Defined Datatypes on a Typical 64-bit System:
| Datatype          | Size (bytes)         |
|-------------------|----------------------|
| `struct`          | Sum of member sizes (with padding) |
| `union`           | Size of largest member |
| `enum`            | Typically 4 bytes (size of `int`) |
| `typedef`         | Same as the type being aliased |

### Example Code to Check Sizes:
```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

union Data {
    int i;
    float f;
    char c;
};

enum Week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

typedef unsigned long long ull;

int main() {
    struct Person p;
    union Data d;
    enum Week today;
    ull num;

    printf("Size of struct Person: %lu bytes\n", sizeof(p));
    printf("Size of union Data: %lu bytes\n", sizeof(d));
    printf("Size of enum Week: %lu bytes\n", sizeof(today));
    printf("Size of typedef ull: %lu bytes\n", sizeof(num));

    return 0;
}
```

This code will output the size of each user-defined datatype based on your system's architecture and compiler.

