# Section 13: Mastering Pointers Utilization in C Programming

## Topic: Passing Pointers to Functions: Simulating Pass-by-Reference
## Date: 05/10/2025

### Notes Section (Main Notes)

**1. Pass by value**
- There are a few different ways you can pass data to a function
  - pass by value
  - pass by reference
- Pass by value is when a function copies the actual value of an argument into the formal parameter of the function
  - Changes made to the parameter inside the function have no effect on the argument
- C programming uses call by value to pass arguments
  - Means the code within a function cannot alter the arguments used to call the function
  - There are no changes in the values, though they had been changed inside the function

**2. Passing data using copies of pointers**
- Pointers and functions get along quite well together
  - You can pass a pointer as an argument to a function and you can also have a function return a pointer as its result
- pass by reference copies the address of an argument into the formal parameter
  - The address is used to access the actual argument used in the call
  - Means the changes made to the parameter affect the passed argument
- To pass a value by reference, argument pointers are passed to the functions just like any other value
  - You need to declare the function parameters as pointer types
  - Changes inside the function are reflected outside the function as well
  - Unlike call by value where the changes do not reflect outside the function

**3. Summary of syntax**
- You can communicate two kinds of information about a variable to a function
```c
  function1(x);
```
- You transmit the value of x and the function must be declared with the same type as `x`
```c
  int function1(int num)
```
```c
  function2(&x);
```
- You transmit the address of x and requires the function definition to include a pointer to the correct type
```c
  int function2(int *ptr);
```
**4. const pointer parameters**
- You can qualify a function parameter using the const keyword
  - Indicates that the function will treat the argument that is passed for this parameter as a constant
  - Only useful when the parameter is a pointer
- You apply the `const` keyword to a parameter that is a pointer to specify that a function will not change the value to which the argument points
```c

  bool SendMessage(const char* pmessage)
  {
    // Code to send the message
    return true;
  }
```

- The type of the parameter, `pmessage`, is a pointer to a `const char`
  - It is the `char` value that's `const`, not its address
  - You could specify the pointer itself as `const` too, but this makes little sense because the address is passed by value
    - You cannot change the original pointer in the calling function
- The compiler knows that an argument that is a pointer to constant data will be safe
**5. Returning pointers from a function**
- Returning a pointer from a function is a particularly powerful capability
  - It provides a way for you to return not just a single value, but a whole set of values
```c
  int * myFunction()
  {

  }
```
- Be careful though, there are specific hazards related to returning a pointer
  - Use local variables to avoid interfering with the variable that the argument points to

---

### Summary Section (Summary of Notes)