# Section 13: Mastering Pointers Utilization in C Programming

## Topic: Arrays and Pointers: Relationships and Efficient Memory Usage
## Date: 05/10/2025

### Notes Section (Main Notes)

**1. Pointers and Arrays**
- An array is a collection of objects of the same type that you can refer to using a single name
- A pointer is a variable that has as its value a memory address that can reference another variable or constant of a given type
  - You can use a pointer to hold the address of different variables at differents times (must be same type)
- Arrays and pointers seem quite different, but, they are very closely related and can sometimes be used interchangeably
- One of the most common uses of pointers in C is as pointers to arrays
- The main reasons for using pointers to arrays are ones of notational convenience and of program efficiency.
- Pointers to arrays generally result in code that uses less memory and executes faster
**2. Arrays and Pointers**
- If you have an array of 100 integers
```c
  int values[100];
```
- You can define a pointer called `valuesPtr`, which can be used to access the integers contained in this array
```c
  int *valuesPtr;
```
- When you define a pointer that is used to point to the elements of an array, you do not designate the pointer as type "pointer to array"
  - You designate the pointer as pointing to the type of element that is contained in the array.
- To set `valuesPtr` to point to the first element in the values array, you write:
```c
  valuesPtr = values;
```
- The address operator is not used
  - The C compiler treats the appearance of an array name without a subscript as pointer to the array
  - Specifying values without a subscript has the effect of producing a pointer to the first element of values
- An equivalent way of producing a pointer to the start of values is to apply the address operator to the first element of the array
```c
  valuesPtr = &values[0];
```
- So, you can use the above example or:
```c
  valuesPtr = values;
```
**3. Summary**
- The two expressions `ar[i]` and `*(ar + i) are equivalent in meaning
  - Both work if `ar` is the name of an array, and both work if `ar` is a pointer variable
  - Using an expression such as `ar++` only works if `ar` is a pointer variable


---

### Summary Section (Summary of Notes)