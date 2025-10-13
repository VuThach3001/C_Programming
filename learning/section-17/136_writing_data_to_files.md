# Section 17: Mastering File Input and Output Operations in C

## Topic: Writing Data to Files: Character, String, and Formatted Output in C

## Date: 12/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Writing characters to a text file**
- The simplest write operation is provided by the function `fputc()`
  - Writes a single character to a text file
```c
int fputc(int ch, FILE *pfile);
```
- The function writes the character specified by the first argument to the file identified by the second argument (file pointer)
  - Returns the character that was written if successful
  - Return `EOF` if failure
- In practice, characters are not usually written to a physical file one by one
  - Extremely inefficient
- The `putc()` function is equivalent to `fputc()`
  - Requires the same arguments and the return type is the same
  - Difference between them is that `putc()` may be implemented in the standard library as a macro, whereas `fputc()` is a function

**2. Writing a string to a text file**
- You can use the `fputs()` function to write to any file or stream
```c
int fputs(const char *str, FILE *pfile);
```
- The **first argument** is a pointer to the character string that is to be written to the file
- The **second argument** is the file pointer
- This function will write characters from a string until it reaches a `\0` character
  - Does not write the null terminator character to the file
    - Can complicate reading back variable-length strings from a file that have been written by `fputs()`
    - Expecting to write a line of text that has a newline character at the end

**3. Writing formatted output to a file**
- The standard function for formatted output to a stream is `fprintf()`
```c
int fprintf(FILE *stream, const char *format);
```
- The **first argument** to this function is the pointer to a `FILE` object that identifies the stream
- The **second argument** to this function is the format
  - a C string that contains one or more of the following items
    - Whitespace character
    - Non-whitespace character
    - Format specifiers
    - Usage is similar to `printf`, but, to a `file`


---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
