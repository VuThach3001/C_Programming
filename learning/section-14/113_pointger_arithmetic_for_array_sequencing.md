# Section 14: Mastering Pointer Arithmetic in C: Increment, Decrement, and Address Usage

## Topic: Pointer Arithmetic for Array Sequencing: A Comprehensive Overview

## Date: 06/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Pointer arithmetic**
- The real power of using pointers to arrays comes into play when you want to sequence through the elements of an array
```c
    *valuesPtr; // Can be used to access the first integer of the values array, that is, values[0]
```
- To reference `values[3]` through the `valuesPtr` variable, you can add 3 to `valuesPtr` and then apply the indirection operator
```c
    *(valuesPtr + 3)
```
- The expression `*(valuesPtr + i)` can be used to access the value contained in `values[i]`
  - To set `values[10]` to `27`, you could do the following:
  ```c
  values[10] = 27;
  ```
  - Or using `valuesPtr`, you could
  ```c
  *(valuesPtr + 10) = 27;
  ```
- To set `valuesPtr` to point to the second element of the values array, you can apply the address operator to values[1] and assign the result to `valuesPtr`
```c
    valuesPtr = &values[1];
```
- If `valuesPtr` points to `values[0]`, you can set it to point to `values[1]` by simply adding `1` to the value of `valuesPtr`
```c
valuesPtr += 1;
```
- this is a perfectly valid expression in C and can be used for pointer to any data type
- The increment and decrement operator `++` and `--` are particularly useful when dealing with pointers
- Sets `valuesPtr` pointing to the next integer in the values array `values[1]`
```c
--textPtr;
```
- Sets `valuesPtr` pointing to the previous integer in the values array, assuming that `valuesPtr` was not pointing to the beginning of the values array

```c
#include <stdio.h>

int arraySum (int array[], const int n);

int main (void)
{
    int arraySum (int array[], const int n);
    int values[10] = { 3,7,-9,3,6,-1,7,9,1,-5 };
    printf ("The sum is %i\n", arraySum (values, 10));


    return 0;
}

int arraySum (int array[], const int n)
{
    int sum = 0, * ptr;
    int* const arrayEnd = array + n;

    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;

    return sum;
}
```
- To pass an array to a function, you simply specify the name of the array
- To produce a pointer to an array, you need only specify the name of the array
- This implies that in the call to the `arraySum()` function, what was passed to the function was actually a pointer to the array values
  - Explains why you are able to change the elements of an array from within a function
- So you might wonder why the formal parameter inside the function is not delclared to be a pointer
```c
    int arraySum(int *array, const int n)
```
- The above is perfectly valid
  - Pointers and arrays are intimately related in C
  - This is why you can declare array to be of type "array of ints" inside the arraySum function or to be of type "pointer to int"
- If you are going to be using index numbers to reference the elements of an array that is passed to a function, declare the corresponding formal parameter to be an array
  - More correctly reflects the use of the array by the function
- If you are using the argument as a pointer to the array, declare it to be of type pointer

**2. Sumary**

```c
int urn[3];
int *ptr1, *ptr2;
```

| Valid             | Invalid               |
| ----------------- | --------------------- |
| `ptr1++`          | `urn++;`              |
| `ptr2 = ptr1 + 2` | `ptr2 = ptr2 + ptr1;` |
| `ptr2 = urn + 1`  | `ptr2 = urn * ptr1;`  |

- Functions that process arrays actually use pointers as arguments
- You have a choice between array notation and pointer notation for writing array-processing functions
- Using array notation makes it more obvious that the function is working with arrays
  - Array notation has a more familiar look to programmers versed in `FORTRAN`, `Pascal`, `Modula-2`, or `BASIC`
- Other programmers might be more accustomed to working with poitners and might find the pointer notation more natural
  - Closer to machine language and, with some compilers, leads to more efficient code

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
