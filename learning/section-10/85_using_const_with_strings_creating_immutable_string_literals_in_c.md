# Section 10: C Strings: In-Depth Guide to Character Arrays and String Functions

## Topic: Using const with Strings: Creating Immutable String Literals in C

## Date: 14/07/2025

### Notes Section (Main Notes)

**1. Constant Strings**
- Sometimes you need to use a constant in a program
```
circumference = 3.14 * diameter;
```
- The constant ```3.14``` represents the world-famous constant **pi** 
- there are good reasons to use a symbolic constant instead of just typing in the number
  - A name tells you more than a number does
```
owed = 0.015 * housevalue;
owed = taxrate * housevalue;
```
- If you read through a long program, the meaning of the second version is plainer.
- Suppose you have used a constant in several places, and it becomes necessary to change its value
  - You only need to alter the definition of the symbolic constant, rather than find and change every occurrence of the constant in the program

**2. #define**
- The preprocessor lets you define constants
``` 
#define TAXRATE 0.015
```
- When your program is compiled, the value ```0.015``` will be substituted everywhere you have used ```TAXRATE```
  - Compile-time substitution
- A define name is not a variable
  - You cannot assign a value to it
- Notice that the ```#define``` statement has a special syntax
  - No **equal** sign used to assign the value ```0.015``` to ```TAXRATE```
  - No semicolon
- ```#define``` statements can appear anywhere in a program
  - No such thing as a local define
  - Most programmers group their ```#define``` statements at the beginning of the program (or inside an include file) where they can be quickly referenced and shared by more than one source file.
- The ```#define``` statement helps to make programs more portable
  - It might be necessary to use constant values that are related to the particular computer on which the program is running
- The ```#define``` statement can be used for character and string constants
```
#define BEEP '\a'
#define TEE 'T'
#define ESC '\033'
#define OOPS "Now you have done it!"
```
**3. Const**
- C90 added a second way to create symbolic constants
  - Using the const keyword to convert a declaration for a variable into a declaration for a constant
```
const int MONTHS = 12; // MONTHS a symbolic constant for 12
```
- ```const``` makes ```MONTHS``` into a read-only value
  - You can display ```MONTHS``` and use it in calculations
  - You cannot alter the value of ```MONTHS```
- ```const``` is a newer approach and is more flexible than using ```#define```
  - It lets you declare a type
  - it allows better control over which parts of a program can use the constant
- C has yet a third way to create symbolic constants
  - **enums**
- Initializing a ```char``` array and declaring it as constant is a good way of handling standard messages.
```
const char message[] = "The end of the world is nigh.";
```
- Because you declare message as ```const```, it's protected from being modified explicitly within the program
- Any attempt to do so will result in an error message from the compiler
- This technique for defining standard messages is particularly useful if they are used in many places within a program
  - Prevents accidental modification of such constants in other parts of the program
---

### Summary Section (Summary of Notes)

