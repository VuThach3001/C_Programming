# Section 4: C Programming Fundamentals: Input, Output, Preprocessing, and Comments

## Topic: Header Files and Libraries: Implementing the #include directive for Code Reuse
## Date: 13/05/2025

### Cue Column (Questions, Keywords, or Prompts)

**1. Overview**
- The ```#include``` statement is a preprocessor directive
- ```#include <stdio.h>```
- It is not strictly part of the executatble program. However, the program won't work without it.
- The symbol ```#``` indicates this is a preprocessing directive.
    - An instruction to your compiler to do something before compiling the source code.
    - Many preprocessing directives.
    - Are usually some at the beginning of the program source file, but they can be anywhere.
    - Similar to the import statement in Java
- In the above example, the compiler is instructed to "include" in the program the contents of the file with the name **stdio.h**
    - Called a header file because it is usually included at the head of a program source file.
    - ```.h``` extension.

**2. Header Files**
- Header files define information about some of the functions that are provided by that file
    - ```stdio.h``` is the standard C library header and provides functionality for displaying output, among many other things.
    - We need to include this file in a program when using the ```printf()``` function from the standard library.
    - ```stdio.h``` contains the information that the compiler needs to understand what ```printf()``` means, as well as other functions that deal with input and output.
    - ```stdio.h``` is short for standard input/output.

**3. Syntax**
- Header file names are case sensitive on some systems, so you should **always write them in lowercase**.
- Two ways to ```#include``` header files in a program
    - Using angle brackets ```#include <Thach.h>```
        - Tells the preprocessor to look for the file in one or more standard system directories.
    - Using double quotes ```#include "Thach.h"```
        - Tells the preprocessor to first look in the current directory.
- Every C compiler that conforms to the C11 standard will have a set of standard header files supplied with it.
- You should use ```#ifndef``` and ```#define``` to protect against multiple inclusion of a header file
- Header files includes many different things
    - ```#define``` directives.
    - **Structure declarations**: Away to group different variables, group different data.
    - **Typedef statements**: To deal with datatypes.
    - **Function prototypes**: important to tell you how functions are defined so the compiler can generate the code it needs to.
- Executable code normally goes into a source code file, not a header file.

---

### Summary Section (Summary of Notes)

