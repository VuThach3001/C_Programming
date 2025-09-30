# Section 11: Trobleshooting and Debugging in C Programs

## Topic: Compiler Errors and Warnings: A Comprehensive Guide to Interpretation

## Date: 30/09/2025

### Notes Section (Main Notes)

**1. Overview**
- It is sometimes very hard to understand what the compiler is complaining about
  - Need to understand compiler errors in order to fix them
  - It is sometimes difficult to identify the true reason behind a compiler error
- The compiler makes decisions about how to translate the code that the programmer has not written in the code
  - Is convenient because the programs can be written more succinctly (only expert programmers take advantage of this feature)
- You should use an option for the compiler to notify all cases where there are implicit decisions
  - This option is `-Wall`
- The compiler shows two types of problems
  - Errors:
    - A condition that prevents the creation of a final program
    - No executable is obtained until all the errors have been corrected
    - The first errors shown are the most reliable because the translations is finished but there are some errors that may derive from previous ones
    - Fix the first errors are first, it is recommended to compile again and see if other later errors also disappeared.
  - Warnings:
    - Messages that the compiler shows about **special** situations in which an anomaly has been detected
    - Non-fatal errors
    - The final executable program may be obtained with any number of warning
- Compile always with the `-Wall` option and **do not consider the program correct** until all warnings have be eliminated.

**2. Most common compiler messages**
- **[1]** `variable` undeclared (first use in this function)
  - This is one of the most common and easier to detect
  - The symbol shown at the beginning of the message is used bust has not been declared

- **[2]** `warning`: implicit declaration of function `...`
  - This warning appears when the compiler finds a function used in the code but no previous information has been given about it
  - Need to declare a function prototype
- **[3]** `warning`: control reaches end of non-void function
  - This warning appears when a function has been defined as returning a result but no return statement has been included to return this result
  - Either the function is incorrectly defined or the statement is missing
- **[4]** warning: unused variable `...`
  - This warning is printed by the compiler when a variable is declared but not used in the code
  - Message disappears if the declaration is removed
- **[5]** `undefined` reference to `...`
  - Appears when there is a function invoked in the code that has not been defined anywhere
  - Compiler is telling us that thre is a reference to a function with no definition
  - Check which function is missing and make sure its definition is compiled
- **[6]** `error` conflicting types for `...`
  - Two definitions of a function prototype have been found
  - One is the prototype (the result type, name, parenthesis including the parameters, and a semicolon)
  - The other is the definition with the function body
  - The information in both places is not identical, and a conflict has been detected
  - The compiler shows you in which line the conflict appears and the previous definition that caused the contradiction

**3. Runtime errors**
- The execution of C programs may terminate abruptly (crash) when a run-time error is detected
  - C programs only print the succinct message **Segmentation** fault
  - Usually results in a core file depending on the signal that has been thrown
  - Can analyze the core file and the call stack



---

### Summary Section (Summary of Notes)