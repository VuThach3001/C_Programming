# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Mastering Functions Definitions and Prototypes in C
## Date: 06/07/2025

### Notes Section (Main Notes)

**1. Arguments and Parameters**
- A parameter is a variable in a function declaration and function definition/implementation
- When a function is called, the arguments are the data you pass into the functions parameters.
  - The actual value of a variable that gets passed to the function.
- Functiono parameters are defined within the function header
  - Are placeholders for the arguments that need to be specified when the function is called
- The parameters for a function are a lest of parameter names with their types
  - Each parameter is separated by a comma
  - Entire list of parameters is enclosed between the parentheses that follow the function name
- A function can have no parameters. in which case you should put **void** between the parentheses, 
- **Note:** **void** is a special keyword that means **nothing**, and it makes clear for the compiler that it must always be called with no arguments. Otherwise, if you let it be empty, you will tell the compiler that: "This function's parameters are unspecified". That means the compiler won't do argument checking, which can lead to bugs.

- Parameters provide the means to pass data to a function
  - Data passed from the calling function to the function that is called.
- The names of the parameters are local to the function 
  - They will assume the values of the arguments that are passed when the function is called.
- The body of the function should use these parameters in its implementation
- A function body may have additional locally defined variables that are needed by the functions's implementation
- When passing an array as an argument to a function
  - You must also pass an additional argument specifying the size of the array
  - The function has no means of knowing how many elements there are in the array
- Example:
  - When the ```printf()``` function is called, you always supply one or more values as arguments
    - First value being the format string
    - The remaining values being any variables to displayed
  - Parameters greatly increase the usefulness and flexibility of a function
    - The ```printf()``` function displays whatever you tell it to display via the parameters and arguments passed.

---

### Summary Section (Summary of Notes)

