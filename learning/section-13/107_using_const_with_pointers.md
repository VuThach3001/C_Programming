# Section 13: Mastering Pointers Utilization in C Programming

## Topic: Using 'const' with Pointers: Values and Addresses Explained

## Date: 05/10/2025

### Notes Section (Main Notes)

**1. Overview**
- When we use the `const` modifier on a variable or an array it tells the compiler that the contents of the variable/ array will not be changed by the program.
- With pointers, we have to consider two things when using the `const` modifier
  - Whether the pointer will be changed
  - Whether the value that the pointer points to will be changed
- You can use the `const` keyword when you declare a pointer to indicate that the value pointed to must not be changed
```c
long value = 999L;
const long *pvalue = &value; // Defines a pointer to a constant
```
- You have declared the value pointed to by `pvalue` to be const
  - The compiler will check for any statements that attempt to modify the value pointed to by `pvalue` and `flag` such statements as an error
- The following statement will now result in an error message from the compiler
```c
  *pvalue = 8888L; // Error - attempt to change const location
```
**2. Pointers to constants**
- You can still modify value (you have only applied `const` to the pointer)
```c
  value = 7777L;
```
- The value pointed to has changed, but you did not use the pointer to make the change
- The pointer it self is not constant, so you can still change what it points to:
```c
  long number = 8888L;
  pvalue = &number; // OK - changing the address in pvalue
```
- Will change the address stored in `pvalue` to point to number
  - Still cannot use the pointer to change the value that is stored
  - You can change the address stored in the pointer as much as you like
  - Using the pointer to change the value pointed to is not allowed, even after you have changed the address stored in the pointer

**3. Constant pointers**
- You might also want to ensure that the address stored in a pointer cannot be changed
- You can do this by using the const keyword in the declaration of the pointer
```c
  int count = 43;
  int *const pcount = &count; // Defines a constant pointer
```
- The above ensures that a pointer always points to the same thing
  - Indicates that the address stored must not be changed
  - Compiler will check that you do not inadvertently attempt to change what the pointer points to elsewhere in your code
```c
 int item = 34;
 pcount = &item; // Error - attempt to change a constant pointer
```
- It is all about where you place the const keyword, either before the type or after the type
```c
  const int * ... // Value can not be changed
  int *const ... // Pointer address cannot change
```
- You can still change the value that `pcount` points to using `pcount`
```c
  *pcount = 345; // OK - changes the value of count
```
- References the value stored in `count` through the pointer and changes its value to 345
- You can create a constant pointer that points to a value that is also constant:
```c
int item = 25;
const int *const pitem = &item;
```
- The `pitem` is a constant pointer to a constant so everything is fixed
  - Cannot change the address store in `pitem`
  - Cannot use `pitem` to modify what it points to
- You can still change the value of item directly
  - If you wanted to make everything not change, you could specify item as const as well

---

### Summary Section (Summary of Notes)