# Section 10: C Strings: In-Depth Guide to Character Arrays and String Functions

## Topic: Mastering String Conversions in C: Uppercase, Lowercase, and Numeric

## Date: 30/09/2025

### Notes Section (Main Notes)

**1. Converting Strings**
- It is very common to convert character case
  - To all upper case or all lower case
- The `toupper()` function converts from lowercase to uppercase
- The `tolower()` function converts from uppercase to lowercase
- both functions return either the converted character or the same character for characters that are already in the correct case or are not convertible such as punctuation characters
- This is how you convert a string to `uppercase`

```
for (int i = 0; (buf[i] = (char) toupper(buf[i])) != '\0'; ++i);
```
- This loop will convert the entire string in the buf array to uppercase by stepping through the string one character at a time
  - Loop stops when it reaches the string termination character `\0`
  - The cast to type `char` is there because `toupper()` resturns type `int`
- You can use the function `toupper()` in combination with the `strstr()` function to find out whether one string occurs in another, ignoring case




---

### Summary Section (Summary of Notes)

