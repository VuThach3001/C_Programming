# Section 12: Mastering Pointers in C: Comprehensive Guide to Pointer Fundamentals

## Topic: Mastering C Pointer Access: Indirection, Dereferencing, and Values

## Date: 03/10/2025

### Notes Section (Main Notes)

**1. Accessing pointer values**
- You use the indirection operator, `*`, to access the value of the variable pointed to by a pointer
  - Also referred to as the dereference operator becuase you use it to "dereference" a pointer
```c
  int number = 15;
  int *pointer = &number;
  int result = 0;
```

- The pointer variable contains the address of the variable number
  - You can use this in an expression to calculate a new value for result
```c
  result = *pointer + 5;
```
- The expression `*pointer` will evaluate to the value stored at the address contained in the pointer
  - The value stored in number `15` so result will be set to `15+5`, which is `20`.
- The indirection operator `*` is also the symbol for multiplication, and it is used to specify pointer types
  - Depending on where the asterisk appears, the compiler will understand whether it should interpret it as an indirection operator, as a multiplication sign, or as part of a type specification

---

### Summary Section (Summary of Notes)