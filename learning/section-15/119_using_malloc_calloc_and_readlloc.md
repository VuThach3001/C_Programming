# Section Mastrering Dynamic Memory Allocation in C: Malloc, Calloc, Realloc, Free

## Topic: Using Malloc, Calloc, and Realloc for Dynamic Memory Management in C

## Date: 09/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Malloc**
- The simpliest standard library function that allocates memory at runtime is call `malloc()`
  - Need to include the `stdlib.h` header file
  - You specify the number of bytes of memory that you want allocated as the argument
  - Returns the address of the first byte of memory that it allocated
  - Because you get an address returned, a pointer is the only place to put it.
```c
int *pNumber = (int*)malloc(100);
```
- In the above, you have requested 100 bytes of memory and assigned the address of this memory block to `pNumber`
  - `pNumber` will point to the first `int` location at the beginning of the 100 bytes that were allocated.
  - Can hold 25 `int` values on my computer, because they require 4 bytes each
  - Assumes that type `int` requires 4 bytes
- It would be better to remove the assumption that `ints` are 4 bytes
```c
omt *pNumer = (int*)malloc(25*sizeof(int));
```
- The argument to `malloc()` above is clearly indicating that sufficient bytes for accommodating 25 values of type `int` should be made available
- Also notice the cast `(int*)` which converts the address returned by the function to the type pointer to `int`
  - Malloc return a pointer of type pointer to void, so you have to cast.
- You can request any number of bytes
  - If the memory that you requested can not be allocated for any reason
    - `Malloc()` returns a pointer with the value `NULL`
    - It is always a good idea to check any dynamic memory request immediately using an if statement to make sure the memory is actually there before you try to use it.\
```c
int *pNumber = (int*)malloc(25*sizeof(int));
if(!pNumber)
{
  // Code to deal with memory allocation failure
}
```
- You can at least display a message and terminate the program
  - Much better than allowing the program to continue and creash when it used a `NULL` address to store something

**2. Releasing memory**
- When you allocate memory dynamically, you should always release the memory when it is no longer required
- Memory that you allocate on the heap will be automatically released when your program ends 
  - Better to explicitly release the mmeory when you are done with it, even if it's just before you exit from the program
- A memory leak occurs when you allocate some meory dynamically and you do not retain the reference to it, so you are unable to release the memory
  - OFten occures within a loop
  - Because you do not release the memory when it is no longer required, your program consumes more and more of the available memory on each loop iteration and eventually my occupy it all
- To free memory that you have allocated dynamically, you must still have access to the address that references the block of memory
- To release the memory for a block of dynamically allocated memory whose address you have stored in a pointer
```c
free(pNumber);
pNumber = NULL;
```
- The `free()` function has a formal parater of type `void*`
  - You can pass a pointer of any type as the argument
- As long as `pNumber` contains the address that was returned when the memory was allocated, the entire bloc kof memory will be freed for further use
- You should always set the pointer to `NULL` after the memory that it points to has been freed

**3. Calloc**
- The `calloc()` function offers a could of advantages over `malloc`
  - It allocates memory as anumber of elements of a given size
  - It initializes the memory that is allocated so that all bytes are zero
- `calloc()` function requires two argument values
  - Number of data items for which space is required
  - Size of each data item
- Is declared in the `stdlib.h` header
```c
int *pNumber = (int*)calloc(75, sizeof(int))
```
- The return value will be `NULL` if it was not possible to allocate the memory requested
  - Very similar to using `malloc()`, but the big plus is that you know the memory area will be initialized to `0`

**4. Realloc**
- The `realloc()` function enables you to reuse or extend memory that you previously allocated using `malloc()` or `calloc()`
- Expects two argument values
  - A poitner containing an address that was previously returned by a call to `malloc()`, `calloc()`
  - The size in bytes of the new memory that you want allocated
- Allocates the amount of memory you specify by the second argument
  - Transfer the contents of the previously allocated memory referenced by the pointer that you supply as the first argument to the newly allocated memory
  - Returns a `void*` pointer to the new memory or `NULL` if the operation fails for some reasons
- The most important feature of this operation is that `realloc()` preserves the contents of the original memory area

**5. Guidelines**
- Avoid allocating lots of small amounts of memory
  - Allocating memory on the head carries some overhead with it
  - Allocating many small blocks of memory will carry much more overhead that allocating fewer larger blocks
- Only hang on to the memory as long as you need it
  - As long as you are finished with a block of memory on the heap, release the memory
- Always ensure that you provide for releasing memory that you have allocated
  - Deside where in your code you will release the memory when you write the code that allocates it
- Make sure you do not inadvertently overwrite the address of memory you have allocated on the heap before you have release it
  - Will cause a memory leak
  - Be especially careful when allocating memory within a loop

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
