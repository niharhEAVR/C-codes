### Why do we need `fflush(stdin)`?

In C, `fflush(stdin)` is commonly used to clear the input buffer, particularly after using `scanf()` to read user input. The purpose is to discard any extra characters that may remain in the input buffer, which could cause issues when reading subsequent inputs.

### Explanation of the Problem:
When you use `scanf()` to read values like integers, it leaves the newline character (`\n`) from the user's input in the input buffer. This can interfere with subsequent input operations. For example, if you are using `gets()` or `scanf()` again after reading an integer, the newline character left in the buffer could be read instead of the expected user input.

**Example of the issue:**
```c
#include <stdio.h>

int main() {
    int rollno;
    char name[100];

    printf("Enter Roll No: ");
    scanf("%d", &rollno);  // Reading integer
    fflush(stdin);          // Clear the input buffer

    printf("Enter Name: ");
    gets(name);  // Reading string
    printf("Roll No: %d\n", rollno);
    printf("Name: %s\n", name);
    
    return 0;
}
```

### Why does `fflush(stdin)` help?
- When you input an integer using `scanf("%d", &rollno)`, the newline character `\n` remains in the input buffer.
- The next time you call `gets(name)`, it might read this leftover newline as the first character of the string, which can cause unexpected behavior.
- `fflush(stdin)` clears the buffer, removing any leftover characters (like `\n`) before calling `gets()`.

### Issues with `fflush(stdin)`:
- **Undefined Behavior**: The C standard does not define the behavior of `fflush()` when applied to `stdin`. Some compilers (like GCC) may allow `fflush(stdin)` to work, but it is not guaranteed to work across all compilers.
- **Better Alternative**: A more reliable and standard way to handle input buffer issues is to use `getchar()` to consume the leftover newline character, or use `scanf` with a proper format specifier to handle the newline.

### Better Alternative:
Instead of using `fflush(stdin)`, you can consume the newline character manually or use `scanf()` with a format specifier that skips the newline.

#### Method 1: Using `getchar()` to consume the newline:
```c
#include <stdio.h>

int main() {
    int rollno;
    char name[100];

    printf("Enter Roll No: ");
    scanf("%d", &rollno);  
    getchar();  // Consume the newline character left by scanf

    printf("Enter Name: ");
    gets(name);  // Safe to use after consuming the newline
    printf("Roll No: %d\n", rollno);
    printf("Name: %s\n", name);
    
    return 0;
}
```

#### Method 2: Using `scanf` to read the string (instead of `gets`):
```c
#include <stdio.h>

int main() {
    int rollno;
    char name[100];

    printf("Enter Roll No: ");
    scanf("%d", &rollno);  

    printf("Enter Name: ");
    scanf(" %[^\n]%*c", name);  // Reads a line of input until a newline is encountered

    printf("Roll No: %d\n", rollno);
    printf("Name: %s\n", name);
    
    return 0;
}
```
In this example:
- `scanf(" %[^\n]%*c", name);` reads a line of input including spaces until it encounters a newline (`\n`), and `%*c` consumes the newline character.

### Conclusion:
- **`fflush(stdin)`** can work in some compilers but is not standard and may lead to undefined behavior.
- It's better to manually handle the input buffer using `getchar()` or use safer alternatives like `scanf(" %[^\n]%*c", name)` to read strings.
