String functions are widely used in programming for manipulating and processing text. Below is a list of the most commonly used string functions, categorized by functionality, along with examples in **C**:

---

### **1. String Length and Size**
#### **`strlen()`**
- **Purpose:** Returns the length of a string (excluding the null terminator).
- **Example:**
  ```c
  char str[] = "Hello";
  printf("Length: %zu\n", strlen(str)); // Output: 5
  ```

---

### **2. String Copy and Concatenation**
#### **`strcpy()`**
- **Purpose:** Copies a string from source to destination.
- **Example:**
  ```c
  char src[] = "World";
  char dest[10];
  strcpy(dest, src);
  printf("Copied: %s\n", dest); // Output: World
  ```

#### **`strncpy()`**
- **Purpose:** Copies a specified number of characters from source to destination (safer than `strcpy`).
- **Example:**
  ```c
  char src[] = "Hello";
  char dest[10];
  strncpy(dest, src, 3);
  dest[3] = '\0'; // Manually add null terminator
  printf("Copied: %s\n", dest); // Output: Hel
  ```

#### **`strcat()`**
- **Purpose:** Appends one string to another.
- **Example:**
  ```c
  char str1[20] = "Hello ";
  char str2[] = "World";
  strcat(str1, str2);
  printf("Concatenated: %s\n", str1); // Output: Hello World
  ```

#### **`strncat()`**
- **Purpose:** Appends a specified number of characters from one string to another.
- **Example:**
  ```c
  char str1[20] = "Hello ";
  char str2[] = "World";
  strncat(str1, str2, 3);
  printf("Concatenated: %s\n", str1); // Output: Hello Wor
  ```

---

### **3. String Comparison**
#### **`strcmp()`**
- **Purpose:** Compares two strings lexicographically.
- **Example:**
  ```c
  char str1[] = "Hello";
  char str2[] = "World";
  printf("Comparison: %d\n", strcmp(str1, str2)); // Output: Negative value
  ```

#### **`strncmp()`**
- **Purpose:** Compares the first `n` characters of two strings.
- **Example:**
  ```c
  char str1[] = "Hello";
  char str2[] = "Helium";
  printf("Comparison: %d\n", strncmp(str1, str2, 3)); // Output: 0 (equal)
  ```

---

### **4. String Search**
#### **`strchr()`**
- **Purpose:** Finds the first occurrence of a character in a string.
- **Example:**
  ```c
  char str[] = "Hello";
  char *pos = strchr(str, 'e');
  if (pos) printf("Found at index: %ld\n", pos - str); // Output: 1
  ```

#### **`strrchr()`**
- **Purpose:** Finds the last occurrence of a character in a string.
- **Example:**
  ```c
  char str[] = "Hello";
  char *pos = strrchr(str, 'l');
  if (pos) printf("Found at index: %ld\n", pos - str); // Output: 3
  ```

#### **`strstr()`**
- **Purpose:** Finds the first occurrence of a substring in a string.
- **Example:**
  ```c
  char str[] = "Hello World";
  char *pos = strstr(str, "World");
  if (pos) printf("Found: %s\n", pos); // Output: World
  ```

---

### **5. String Tokenization**
#### **`strtok()`**
- **Purpose:** Splits a string into tokens based on delimiters.
- **Example:**
  ```c
  char str[] = "Hello,World,Example";
  char *token = strtok(str, ",");
  while (token != NULL) {
      printf("%s\n", token); // Output: Hello\nWorld\nExample
      token = strtok(NULL, ",");
  }
  ```

---

### **6. String Case Conversion**
#### **`toupper()` and `tolower()`**
- **Purpose:** Converts characters to uppercase or lowercase.
- **Example:**
  ```c
  char ch = 'a';
  printf("Uppercase: %c\n", toupper(ch)); // Output: A
  printf("Lowercase: %c\n", tolower('B')); // Output: b
  ```

---

### **7. Memory Operations (for Strings)**
#### **`memset()`**
- **Purpose:** Fills a block of memory with a specific value.
- **Example:**
  ```c
  char str[10];
  memset(str, 'A', 9);
  str[9] = '\0';
  printf("Filled: %s\n", str); // Output: AAAAAAAAA
  ```

#### **`memcmp()`**
- **Purpose:** Compares two blocks of memory.
- **Example:**
  ```c
  char str1[] = "Hello";
  char str2[] = "World";
  printf("Memory Compare: %d\n", memcmp(str1, str2, 3)); // Output: Negative value
  ```

---

### **8. String Formatting**
#### **`sprintf()`**
- **Purpose:** Writes formatted data to a string.
- **Example:**
  ```c
  char buffer[50];
  int num = 42;
  sprintf(buffer, "Number: %d", num);
  printf("%s\n", buffer); // Output: Number: 42
  ```

---

### **Common Use Cases**
- **String manipulation:** Concatenating, copying, or tokenizing strings.
- **Validation:** Checking for substrings or specific characters.
- **Parsing:** Tokenizing strings for CSV or log parsing.
- **Formatting:** Preparing strings for output or storage.

These functions are powerful tools for string manipulation and are foundational in C programming.