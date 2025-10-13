# Section 10: C Strings: In-Depth Guide to Character Arrays and String Functions

## Topic: Introduction to Character Strings in C: Literals, Null Terminators

## Date: 11/07/2025

### Notes Section (Main Notes)

**1. Strings**
- We have learned all about the ```char``` datatype
  - Contains a single character
- To assign a single character to a ```char``` variable, the character is enclosed within a pair of single quotation marks.
```
plusSign = '+';
```
- You have also learned that there is a distinction made between the single quotation and double quotation marks
```
plusSign = "+"; // Incorrect if plusSign is a char
```
- A **string constant** or string literal is a sequence of characters or symbols between a pair of double-quote characters
  - Anything between a pair of double quotes is interpreted by the compiler as a string
  - Includes any special characters and embedded spaces.
- Everytime you have displayed a message using the ```printf()``` function, you have defined the message as a **string constant**
```
printf("This is a string");
printf("This is a string");
printf("For\"you write\\\\".");
```
- Understand the difference between single quotation and double quotation marks
  - Both are used to create two different types of constants in C
- For the third example above, you must specify a double quote within a string as the escape sequence ```\```
  - The compiler will intepret an explicit double quote without a preceding backslash as a string delimiter.
- Also, you must also use the escape sequence ```\\``` when you want to include a backslash in a string
  - A backslash in a string always signals the start of an escape sequence to the compiler

**2. Null Character**
- A special character with the code value ```0``` is added to the end of each string to mark where it ends
  - This character is known as the null character and you write it as ```\0```
- A string is always terminated by a null character, so the length of a string is always one greater than the number of characters in the string.
- Dont confuse the **null character** will ```NULL```
  - **Null character** is a string terminator
  - ```NULL``` is a symbol that represents a memory address that doesn't reference anything
- You can add a ```\0``` character to the end of a string explicitly
  - This will create two strings.

**3. Null Character Example**
```
#include <stdio.h>

int main(void)
{
    printf("The character \0 is used to terminate a string.");
    return 0;
}
```
- If you compile and run this program, you'll get this output:
  - The character
  - Only the first part of the string has been displayed
  - Output ends after the first two words because the function stops outputting the string when it reaches the first null character
  - The second ```\0``` at the end of the string will never be reached.


---

### Summary Section (Summary of Notes)

