### File Handling in C

**File handling** in C allows you to read from and write to files. Files are used to store data permanently, as opposed to variables that only store data temporarily during the execution of a program. File handling in C is done using the standard library functions provided in the `<stdio.h>` header file.

### Types of Files in C:
1. **Text Files**: These contain human-readable characters, such as `.txt` files. Each line is typically terminated by a newline character (`\n`).
2. **Binary Files**: These contain data in a binary format, which is not human-readable. These files store data as it is in memory (e.g., `.bin` files).

### File Operations in C:
The basic file operations in C are:
1. **Opening a file**: Before performing any operation on a file, it must be opened using the `fopen()` function.
2. **Reading from a file**: After opening a file, you can read its contents using functions like `fgetc()`, `fgets()`, or `fread()`.
3. **Writing to a file**: You can write data to a file using `fputc()`, `fputs()`, or `fwrite()`.
4. **Closing a file**: After performing the necessary operations, you should close the file using the `fclose()` function to release the resources.

### Opening a File:
The `fopen()` function is used to open a file. It requires two arguments:
- The name of the file (including path if necessary).
- The mode in which the file should be opened.

**Syntax:**
```c
FILE *fopen(const char *filename, const char *mode);
```

### File Modes:
- `"r"`: Open for reading (file must exist).
- `"w"`: Open for writing (creates a new file or truncates an existing file).
- `"a"`: Open for appending (creates a new file or appends to an existing file).
- `"r+"`: Open for reading and writing (file must exist).
- `"w+"`: Open for reading and writing (creates a new file or truncates an existing file).
- `"a+"`: Open for reading and appending (creates a new file or appends to an existing file).

### Example of File Handling in C:

#### 1. **Writing to a File**:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");  // Open file for writing
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");  // Write to the file
    fclose(file);  // Close the file

    printf("Data written to file successfully.\n");
    return 0;
}
```
- `fopen("example.txt", "w")` opens the file `example.txt` for writing. If the file doesn't exist, it will be created.
- `fprintf(file, "Hello, World!\n");` writes the string `"Hello, World!"` to the file.
- `fclose(file)` closes the file after the operation is complete.

#### 2. **Reading from a File**:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");  // Open file for reading
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file)) {  // Read line by line
        printf("%s", buffer);  // Print each line
    }

    fclose(file);  // Close the file
    return 0;
}
```
- `fopen("example.txt", "r")` opens the file `example.txt` for reading.
- `fgets(buffer, sizeof(buffer), file)` reads each line from the file and stores it in the `buffer` array.
- `fclose(file)` closes the file after reading.

#### 3. **Appending to a File**:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a");  // Open file for appending
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Appended text.\n");  // Append text to the file
    fclose(file);  // Close the file

    printf("Data appended to file successfully.\n");
    return 0;
}
```
- `fopen("example.txt", "a")` opens the file `example.txt` for appending.
- `fprintf(file, "Appended text.\n");` appends the string `"Appended text."` to the file.

#### 4. **Binary File Handling**:
To handle binary files, you can use `fread()` and `fwrite()` functions, which are used to read and write binary data.

**Writing Binary Data**:
```c
#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
};

int main() {
    FILE *file = fopen("student.dat", "wb");  // Open file for writing in binary mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student s1 = {101, "John"};
    fwrite(&s1, sizeof(struct Student), 1, file);  // Write binary data to file
    fclose(file);  // Close the file

    printf("Data written to binary file successfully.\n");
    return 0;
}
```

**Reading Binary Data**:
```c
#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
};

int main() {
    FILE *file = fopen("student.dat", "rb");  // Open file for reading in binary mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student s1;
    fread(&s1, sizeof(struct Student), 1, file);  // Read binary data from file
    fclose(file);  // Close the file

    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    return 0;
}
```

### Important File Handling Functions in C:

| Function        | Description                                                        |
|-----------------|--------------------------------------------------------------------|
| `fopen()`       | Opens a file with a specified mode (e.g., `"r"`, `"w"`, `"a"`, etc.). |
| `fclose()`      | Closes the file after completing operations.                       |
| `fprintf()`     | Writes formatted data to a file.                                   |
| `fscanf()`      | Reads formatted data from a file.                                  |
| `fputs()`       | Writes a string to a file.                                         |
| `fgets()`       | Reads a line of text from a file.                                  |
| `fputc()`       | Writes a single character to a file.                               |
| `fgetc()`       | Reads a single character from a file.                              |
| `fread()`       | Reads binary data from a file.                                     |
| `fwrite()`      | Writes binary data to a file.                                      |
| `feof()`        | Checks if the end of the file has been reached.                    |
| `ferror()`      | Checks for errors while performing file operations.               |

### Conclusion:
- File handling in C is essential for reading and writing data to files, allowing data to be stored persistently.
- You can use different file modes (`r`, `w`, `a`, etc.) to control how a file is accessed.
- Proper file handling ensures data integrity and efficient file operations. Always close the file after completing the operations to release system resources.