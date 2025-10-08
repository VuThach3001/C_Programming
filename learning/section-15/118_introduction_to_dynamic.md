# Section Mastrering Dynamic Memory Allocation in C: Malloc, Calloc, Realloc, Free

## Topic: Introduction to Dynamic Memory Allocation: Stack vs Heap in Programming

## Date: 09/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Overview**
- Whenever you define a variable in C, the compiler automatically allocates the correct amount of storage for you based on the data type.
- It is frequently desirable to be able to dynamically allocate storage while a program is running
- If you have a program that is designed to read in a set of data from a file into an array in memory, you have three choices
  - Define the array to contain the maximum number of possible elements at compile time
  - Use a variable-length array to dimension the size of the array at runtime
  - Allocate the array dynamically using one of C's memory allocation routines

**2. Dynamic memory allocation**
- With the first approach, you have to define your array to contain the maximum number of elements that would be read into the array
```c
int dataArray[1000];
```
- The data file cannot contain more than 1000 elements, if it does, your program will not work
  - If it is larger than 1000 you must go back to the program, change the size to be larger and recompile it
  - No matter what value you sellect, you always have the chance of running into the same problem again in the future
- Using the dynamic memory allocation functions, you can get storage as you need it
  - This approach enables you to allocate memory as the program is executing
- Dynamic memory allocation depends on the concept of a pointer and provides a strong incentive to use pointers in your code
- Dynamic memory allocation allows memory for storing data to be allocated dynamically when your program executes
  - Allocating memory dynamically is possible only because you have pointers available
- The majority of production programs will use dynamic memory allocation
- Allocating data dynamically allows you to create pointers at runtime that are just large enough to hold the amount of data you require for the task

**3. Heap vs. Stack**
- Dynamic memory allocation reserves space in a memory area called the **heap**
- The stack is another place where memory is allocated
  - Function arguments and local variables in a function are stored here
  - When the execution of a function ends, the space allocated to store arguments and local variables is freed
- The memory in the heap is different in that it is controlled by your
  - When yhou allocate memory on the heap, it is up to you to keep track of when the memroy you have allocated is no longer required
  - You must free the space you have allocated to allow it to be reused.

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
