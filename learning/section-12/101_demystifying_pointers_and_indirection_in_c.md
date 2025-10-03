# Section 12: Mastering Pointers in C: Comprehensive Guide to Pointer Fundamentals

## Topic: Demystifying Pointers and Indirection in C: Core Concept Explained

## Date: 03/10/2025

### Notes Section (Main Notes)

**1. Indirection**
- Pointers are very similar to the concept of indirection that you employ in your everyday life
  - Suppose you need to buy a new ink cartridge for your printer
  - All purchases are handled by the purchasing department
    - You call Joe in purchasing and ask him to order the new cartridge for you
    - Joe then calls the local supply store to order the cartridge
  - You are not ordering the cartridge directly from the supply store yourself (indirection )
- In programming languages, indirection is the ability to reference something using a name, reference, or container, instead of the value itself
- The most common form of indirection is the act of manipulating a value through its memory address.
- A pointer provides an indirect means of accessing the value of a particular data item
  - A variable whose value is a memory address
  - Its value is the address of another location in memory that can contain a value

**2. Overview**
- Just as there are reasons why it makes sense to go through the purchasing department to order new cartridges (you don't have to know which particular store the cartridges are being ordered from)
  - There are good reasons why it makes senses to use pointers in C
- Using pointers in your program is one of the most powerful tools available in the C language
- Pointers are also one of the most confusing concept of the C language
  - It is immportant you get this concept figured out in the beginning and maintain a clear idea of what is happening as you dig deeper
- The compiler must know the type of data stored in the variable to which it points
  - Need to know how much memory is occupied or how to handle the contents of the memory to which it points
  - Every pointer will be associated with a specific variable type
  - It can be used only to point to variables of that type
- Pointers of type "pointer to int" can point only to variables of type int
- Pointers of type "pointer to float" can point only to variables of type float
- The value of `&number` is the address where number is located
  - This value is used to initialize `pnumber` in the second statement

```c
int number = 99;
int *pnumber = &number;
// pnumber is pointing to the address 1008 with syntax &number
```

**3. Why use pointers?**
- Accessing data by means of only variables is very limiting
  - With pointers, you can access any location (you can treat any position of memory as a variable for example) and perform arithmetic with pointers
- Pointers in C make it easier to use arrays and strings
- Pointers allow you to refer to the same space in memory from multiple locations
  - Means that you can update memory in one location and the change can be seen from another location in your program
  - Can also save space by being able to share components in your data structures
- Pointers allow functions to modify data passed to them as variables
    - Pass by reference - passing arguments to function in way they can be changed by function
- Can also be used to optimize a program to run faster or use less memory than it would otherwise
- Pointers allow us to get multiple values from the function
  - A function can return only one value but by passing arguments as pointers we can get more than one values from the pointer
- With pointers dynamic memory can be created according to the program use
  - We can save memory from static (compile time) declarations
- Pointers allow us to design and develop complex data structures like a stack, queue, or linked list
- Pointers provide direct memory access

**4. Displaying a pointers value**
- To output the address of a variable, you use the output format specifier `%p`
  - Outputs a pointer value as a memory address in hexadecimal form
```c
int number = 0; // A variable of type int initialized to 0
int* pnumber = NULL; // A pointer that can point to type int

number = 10;
pnumber = &number;
printf("pnumber's value: %p\n", pnumber); // Output the value (an address)
```
- Pointers occupy 8 bytes and the addresses have 16 hexadecimal digits
  - If a machine has a 64-bit opearating system and my compiler supports 64-bit addresses
  - Some compilers only support 32-bit addressing, in which case addresses will be 32-bit addresses
```c
  printf("number's address: %p\n", &number); //Output the address
  printf("pnumber's address: %p\n", (void*)&pnumber); //Output the address
```
- Remember, a pointer itself has an address, just like any other variable
  - You use `%p` as the conversion specifier to display an address
  - You use the `&` (address of) operator to reference the address that the `pnumber` variable occupies
  - The cast to `void*` is to prevent a possible warning from the compiler
    - The `%p` specification expects the value to be some kind of pointer type, but the type of `&pnumber` is "pointer to pointer to int"

**5. Displaying the number of bytes a pointer is using**
- You use the `sizeof` operator to obtain the number of bytes a pointer occupies
- You may get a compiler warning when using `sizeof` this way
  - `size_t` is an implementation-defined integer type
  - To prevent the warning, you could cast the argument to type `int` like:
  ```c
    printf("pnumber's size: %d bytes\n", (int) sizeof(pnumber)); //Output the size
  ```


---



### Summary Section (Summary of Notes)