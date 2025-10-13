# Section 13: Mastering Pointers Utilization in C Programming

## Topic: Understanding Void Pointers: Flexibility and Type Casting

## Date: 05/10/2025

### Notes Section (Main Notes)

**1. Overview**
- The type name void means absence of any type
- A pointer of type `void*` can contain the address of a data item of any type
- `void*` is often used as a parameter type or return valuye type with functions that deal with data in a type-independent way
- Any kind of pointer can be passed around as a value of type `void*`
  - The **void pointer** does not know what type of object it is pointing to, so, it cannot be dereferenced directly
  - The **void pointer** must first be explicitly cast to another pointer type before it is dereferenced.
- The address of a variable of type `int` can be stored in a pointer variable of type `void*`
- When you want to access the integer value at the address stored in the `void*` pointer, you must first cast the pointer to type `int*`

---

### Summary Section (Summary of Notes)