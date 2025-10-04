# Section 12: Mastering Pointers in C: Comprehensive Guide to Pointer Fundamentals

## Topic: Comprehensive Overview of C Pointer Operations and Use Cases

## Date: 04/10/2025

### Notes Section (Main Notes)

**1. Overview**
- C offers several basic operations you can perform on pointers
- You can assign an address to a pointer
  - Assigned value can be an array name, a variable preceded by address operator `&`, or another second pointer
- We can dereference a pointer
  - The `*` operator gives the value stored in the pointed-to location
- You can take a pointer address
  - The `&` operator tells you where the pointer itself is stored
- You can perform pointer arithmetic
  - Use the `+` operator to add an integer to a pointer to an integer (integer is multiplied by the number of bytes in the pointed-to type and added to the original address)
  - Increment a pointer by one (useful in arrays when moving to the next element)
  - USe the `-` operator to subtract an integer from a pointer (integer is multiplied by the number of bytes in the pointed-to type and subtracted from the original address)
  - Decrementing a pointer by one (useful in arrays when going back to the previous element)
- You can find the difference between two pointers
  - You do this for two pointers to elements that are in the same array to find out how far apart the elements are
- You can use the relational operators to compare the values of two pointers
  - Pointers must be the same type
- There are two forms of subtraction:
  - Subctract one pointer from another to get an integer
  - Subtract an integer from a pointer and get a pointer
- Be careful when incrementing or decrementing pointers and causing an array "out of bounds" error
  - Computer does not keep track of whether a pointer still points to an array element

**2. Pointers used in expressions**
- The value referenced by a pointer can be used in an arithmetic expressions
  - If a variable is defined to be of type "pointer to integer" then it is evaluated using the ruls of integer arithmetic

```c
  int number = 0; // A variable of type int initialized to 0
  int* pnumber = NULL; // A pointer that can point to type int
  number = 10;
  pnumber = &number ; // Store the address of number in pnumber
  *pnumber += 25;
```
- Increments the value of the number variable by 25
- `*` indicates you are accessing the contents to which the variable ccalled `pnumber` is pointing to
- If a pointer points to a variable `x`
  - That pointer has been defined to be a pointer to the same data type as is `x`
  - Use of `*pointer` in an expression is identical to the use of x in the same expression
- A variable defined as a "pointer to int" can store the address of any variable of type int

```c
  int value = 999;
  pnumber = &value;
  *pnumber += 25;
```
- The statement will operate with the new variable, value
  - The new contents of value will be 1024 
- A pointer can contain the address of any variable of the appropriate type
  - You can use one pointer variable to change the values of many different variables
  - As long as they are of a type compatible with the pointer type

**3. When receiving input**
- When we have used `scanf()` to input values, we have used the `&` operator to obtain the address of a variable
  - On the variable that is to store the input (second argument)
- When you have a pointer that already contains ad address, you can use the pointer name as an argument for `scanf()`

```c
  int value = 0;
  int *pvalue = &value; // Set pointer to refer to value

  printf("Input an integer: ");
  scanf("%d", pvalue); //Read into value via the pointer

  printf("You entered %d.\n". value); // Output the value entered
```
**5. Testing for NULL**
- There is one rule you should burn into your memory
  - Do not dereference an unitialized pointer
```c
  int* pt;
  *pt = 5; // A terrible error
```
- Second line means store the value `5` in the location to which `pt` points
  - `pt` has a random value, there is no knowing where the 5 will be placed
- It might go somewhere harmless, it might overwrite data or code, or it might cause the program to crash
- Creating a pointer only allocates memory to store the pointer itself
  - It does not allocate memory to store data
  - Before you use a pointer, it should be assigned a memory location that has already been allocated
    - Assign the address of an existing variable to the pointer
    - Or you can use the `malloc()` function to allocate memory first
- We already know that when declaring a pointer that does not point to anything, we should initialize it to `NULL`
```c
  int* value = 0;
```
- Because `NULL` is the equivalent of zero, if you want to test whether `pvalue` is `NULL`, you can do this:
  - Or you can do it explicitly by using `==NULL`
```c
  if(!pvalue) ...
```
- You wantto check for `NULL` before you dereference a pointer
  - Often when pointers are passed to functions

---

### Summary Section (Summary of Notes)