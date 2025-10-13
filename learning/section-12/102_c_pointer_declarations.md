# Section 12: Mastering Pointers in C: Comprehensive Guide to Pointer Fundamentals

## Topic: C Pointer Declarations: Initializing with NULL, Assigning Addresses

## Date: 03/10/2025

### Notes Section (Main Notes)

**1. Declaring pointers**
- Pointer are not declared like normal variables

```c
  pointer ptr; // not the way to declare a pointer
```
- It is not enough to say that a variable is a pointer
  - You also have to specify the kind of variable to which the pointer points
  - Different variables take up different amounts of storage
  - Some pointer operations require knowledge of that storage size
- You declare a pointer to a variable of type `int` with
```c
  int *pnumber;
```
- The type of the variable with the name `pnumber` is `int*`
  - Can store the address of any variable of type `int`
```c
  int *pi; // pi is a pointer to an integer variable
  char *pc; // pc is a pointer to a character variable
  float *pf, *pg; // pf, pg are pointers to float variables
```
- The space between the `*` and the pointer name is optional
  - The programmers use the space in a declaration and omit it when dereferencing a variable
- The value of a pointer is an address, and it is represented internally as an **unsigned integer** on most systems
  - However, you shouldn't think of a pointer as an integer type
  - Things you can do with integers that you can not do with pointers and vice versa.
  - You can multiply one integer by another, but you can not multiply one pointer by another.
- A pointer really is a new type, not an integer type
  - `%p` represents the format specifier for pointers
- The previous declarations creates the variables but does not initialize it
  - Dangerous when not initialized
  - You should always initialize a pointer when you declare it

**2. NULL Pointers**
- You can initialize a pointer so that it does not point to anything
  
```c
  int *pnumber = NULL;
```
- `NULL` is a constant that is defined in the standard library
  - Is the equivalent of zero for a pointer
- `NULL` is the value that is guaranteed not to point to any location in memory
  - Means that it implicitly prevents the accidental overwriting of memory by using a pointer that does not point to anything specific
- Add an `#include` directive for `stddef.h` to your source file.

**3. Address of operator**
- If you want to initialize your variable with the address of a variable you have already declared
  - Use the address of operator `&`
```c
int number = 99;
int *pnumber = &number;
```
- The initial value of pnumber is the address of the variable number
  - The declaration of number must precede the declaration of the pointer that stores its address
  - Compiler must have already allocated space and thus an address for number to use it to initialize `pnumber`

**4. Be careful**
- There is nothing special about the declaration of a pointer
  - Can declare regular variables and pointers in the same statement
```c
  double value, *pVal, fnum;
```
- Only the second variable, `pVal`, is a pointer
```c
  int *p, q;
```
- The above declares a pointer, `p` of type `int*`, and a variable `q` of type `int`
  - A common mistake to think that both `p` and `q` are pointers

---

### Summary Section (Summary of Notes)