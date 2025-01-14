Let's visualize how memory is allocated in the heap during the execution of the program using **`malloc`**, **`calloc`**, and **`realloc`**.

### Visualizing the Heap

Imagine the **heap** as a large block of memory where dynamic memory allocation happens. The heap is like a big pool, and each time you allocate memory, you take a portion of that pool. When you free memory, you return it to the pool.

We'll break down the memory allocation step by step, showing how the heap grows and shrinks.

---

### **1. Initial Memory Allocation with `malloc`**

When you call `malloc(5 * sizeof(int))`, you're asking the heap to allocate space for **5 integers**. Let's assume that each integer takes **4 bytes** of memory.

#### Heap State:
```
Heap:  |  [  1  ][  2  ][  3  ][  4  ][  5  ]  |   (Allocated by malloc)
```
- Here, each box represents an integer, and the values are assigned manually.
- The memory is **not initialized** (may contain garbage values).

---

### **2. Memory Allocation with `calloc`**

When you call `calloc(5, sizeof(int))`, you're asking for **5 integers** again, but this time the memory is **initialized to 0**.

#### Heap State:
```
Heap:  |  [  0  ][  0  ][  0  ][  0  ][  0  ]  |   (Allocated by calloc)
```
- The values are **automatically initialized to 0** by `calloc`.

---

### **3. Memory Reallocation with `realloc`**

Next, you call `realloc(numbers, 10 * sizeof(int))` to resize the memory allocated by `malloc` from 5 integers to 10 integers. This is where the heap grows.

- The original `malloc` memory is resized, and **new space is allocated** at the end to hold the additional integers.
- The old values (1 to 5) are retained, and the new values (6 to 10) are initialized.

#### Heap State:
```
Heap:  |  [  1  ][  2  ][  3  ][  4  ][  5  ][  6  ][  7  ][  8  ][  9  ][  10 ]  |   (Allocated by realloc)
```
- The **first 5 values** come from the previous `malloc`.
- The **next 5 values** (6 to 10) are **newly allocated** and initialized.

---

### **4. Freeing Memory with `free`**

Finally, when you call `free(numbers)` and `free(numbers_calloc)`, you're returning the memory to the heap. This means the memory is now available for other allocations.

#### Heap State:
```
Heap:  |  (Memory returned to the heap)
```
- The memory is **released back** into the pool, and the heap space is now available for other allocations.

---

### **Complete Memory Allocation Process Visualization:**

1. **Step 1: Initial `malloc`**:
   ```
   Heap:  |  [  1  ][  2  ][  3  ][  4  ][  5  ]  |   (Allocated by malloc)
   ```

2. **Step 2: `calloc` Allocation**:
   ```
   Heap:  |  [  0  ][  0  ][  0  ][  0  ][  0  ]  |   (Allocated by calloc)
   ```

3. **Step 3: `realloc` Expansion**:
   ```
   Heap:  |  [  1  ][  2  ][  3  ][  4  ][  5  ][  6  ][  7  ][  8  ][  9  ][  10 ]  |   (Allocated by realloc)
   ```

4. **Step 4: `free` Memory**:
   ```
   Heap:  |  (Memory returned to the heap)
   ```

---

### **What Happens Behind the Scenes:**

- **`malloc`**: Allocates memory but doesn’t initialize it. You get a block of memory, and the values inside it could be anything.
- **`calloc`**: Allocates memory and initializes it to zero.
- **`realloc`**: Resizes an existing block of memory. If it can't resize the current block in place, it may move it to a new location and copy the existing data there.
- **`free`**: Frees the allocated memory and returns it to the heap.

---

### **Heap Memory Management:**

- **Memory Fragmentation**: If you keep allocating and freeing memory, the heap can become fragmented, meaning there are gaps between allocated blocks. This can lead to inefficient memory use.
- **Automatic Cleanup**: When the program ends, the operating system automatically frees all memory that was allocated. But during the program's execution, it's important to free memory manually to avoid memory leaks.
