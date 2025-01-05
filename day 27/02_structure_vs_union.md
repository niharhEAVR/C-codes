Here are the key differences between **union** and **structure** in C:

### **1. Memory Allocation**
- **Structure**: Each member has its own memory location. The total size of a structure is the sum of the sizes of all its members.
- **Union**: All members share the same memory location. The size of a union is the size of its largest member.

### **2. Member Access**
- **Structure**: All members can store values simultaneously, and you can access them independently.
- **Union**: Only one member can store a value at a time. Changing one member's value will overwrite the values of other members.

### **3. Memory Efficiency**
- **Structure**: Less memory-efficient because each member has its own memory space.
- **Union**: More memory-efficient because all members share the same memory space.

### **4. Use Case**
- **Structure**: Useful when you need to store different types of data that will be used together at the same time.
- **Union**: Useful when you need to store different types of data, but only one type will be used at any given time.

### **5. Size**
- **Structure**: Size is the sum of the sizes of all its members.
- **Union**: Size is the size of the largest member.

---

### **Example**

#### **Structure**:
```c
struct example {
    int x;
    float y;
};
```
- Memory: `sizeof(struct example)` = size of `int` + size of `float`.

#### **Union**:
```c
union example {
    int x;
    float y;
};
```
- Memory: `sizeof(union example)` = size of the largest member (`int` or `float`).

---

### **Summary**:
- **Structure**: Each member has its own memory.
- **Union**: All members share the same memory, so only one member can hold a value at a time.

Let me know if you'd like more details on any specific point!