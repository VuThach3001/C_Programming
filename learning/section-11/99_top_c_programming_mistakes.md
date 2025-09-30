# Section 11: Trobleshooting and Debugging in C Programs

## Topic: Top C Programming Mistakes: Identification and Prevention Techniques

## Date: 30/09/2025

### Notes Section (Main Notes)

**1. Common C Mistakes**
- **[1]** Misplacing a semicolon
  ```
  if(j == 100);
    j = 0;
  ```
  - The value of `j` will always be set to 0 due to the misplaced semicolon after t he closing parenthesis
    - Semicolon is syntactically valid (it represents the `null` statement), and, therefore, no error is produced by the compiler
    - Same type of mistake is frequently made in while and for loops
- **[2]** Confusing the operator `=` with the operator `==`
    - Usually made inside an `if`, `while`, or `do` statement
    - Perfectly valid and has the effect of assigning `2` to `a` and then executing the `printf()` call
    - `printf()` function will always be called because the value of the expression contained in the `if` statement will always be **nonzero**
  ```
  if (a = 2)
    printf("Your turn.\n");
  ```
- **[3]** Omitting prototype declaration
  ```
    result = squareRoot(2);
  ```
  - If `squareRoot` is defined later in the program, or in another file, and is not explicitly declared otherwise
    - Compiler assumes that the function returns an `int`
    - Always safest to include a prototype declaration for all functions that you call (either explicitly yourself or implicitly by including the correct header file in your program)
- **[4]** Failing to include the header file that includes the definition for a C-programming library function being used in the program
  ```
  double answer = sqrt(value1);
  ```
  - If this program does not `#include <math.h>` file, this will generate an error that `sqrt()` is undefined.
- **[5]** Confusing a character constant and a character string
  ```
  text = 'a';
  ```
  - A single character is assigned to text
  ```
  text = "a";
  ```
  - A pointer to the character string `"a"` is assigned to text
  - In the first case, text is normally declared to be a `char` variable
  - In the second case, it should be declared to be of type **pointer to char**
- **[6]** Using the wrong bounds for an array
  ```
  int a[100], i, sum = 0;
  ...
  for(int i = 1; i <= 100; ++i)
    sum += a[i];
  ```
  - Valid subscripts of an array range from `0` through the number of elements minus one
    - The preceding loop is incorrect because the last valid subscript of `a` is `99` and not `100`
    - Also probably intended to start with the first element of the array; therefore, `i` should have been initially set to `0`
  - Forgetting to reserve an extra location in an array for the terminating null character of a string
    - When declaring character arrays they need to be large enough to contain the terminating null character
    - The character string "hello" would require six locations in a character array if you wanted to store a null at the end.
- **[7]** Confusing the operator `->` with the operator `.` when referencing structure members
  - The operator `.` is used for structure variables
  - The operator `->` is used for structure pointer variables.
- **[8]** Omitting the ampersand before nonpointer variables in a scanf() call
  ```
  int number;
  ...
  scanf("%i", number);
  ```
  - All arguments appearing after the format string in a `scanf()` call must be pointers
- **[9]** Using a pointer variable before it's initialized
  ```
  char* char_pointer;
  *char_pointer = 'X';
  ```
  - You can only apply the indirection operator to a pointer variable after you have set the variable pointing somewhere
  - `char_pointer` is never set pointing to anything, so the assignment is not meaningful
- **[10]** Omitting the break statement at the end of a case in a switch statement
  - If a break is not included at the end of a case, then execution continues into the next case
- **[11]** Inserting a semicolon at the end of a preprocessor definition
  - Usually happens because it becomes a matter of habit to end all statements with semicolon
  ```
  #define END_OF_DATA 999;
  ```
  - Leads to a syntax error if used in an expression such as
  ```
  if (value == END_OF_DATA)
  ```
  - The compiler will see this statement after preprocessing
  ```
  if (value == 999;)
  ```
- **[12]** Omitting a closing parenthesis or closing quotation marks on any statement
  ```
  total_earning = (cash + (investments * inv_interest) + (savings * sav_interest);
  printf("Your total money to date is %.2f, total_earning);
  ```
  - The use of embedded parentheses to set apart each portion of the equation makes for a more readable line of code
  - However, there is always the possibility of missing a closing parenthesis (or in some occasions, adding one too many)
  - The second line is missing a closing quotation mark for the string being sent to the `printf()` function
  - Both of these will generate a compiler error
    - Sometimes the error will be identified as coming on a different line
    - Depending on whether the compiler uses a parenthesis or quotation mark on a subsequent line to complete the expression which moves the missing character to a place later in the program.

---

### Summary Section (Summary of Notes)
