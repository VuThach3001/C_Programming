# Section 17: Mastering File Input and Output Operations in C

## Topic: Reading Data from Files: Character, String, and Formatted Input in C

## Date: 12/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Reading characters from a text file**
- The `fgetc()` function reads a character from a text file that has been opened for reading
- Takes a file pointer as its only argument and returns the character read as type `int`
```c
int mchar = fgetc(pfile); // Reads a character into mchar with pfile a File pointer
```
- The `mchar` is type int because `EOF` will be returned if the end of the file has been reached
- The function `getc()`, which is equivalent to `fgetc()`, is also available
  - Requires an argument of type `FILE*` and returns the character read as type `int`
  - Virtually identical to `fgetc()`
  - Only difference between them is that `getc()` may be implemented as a macrio, whereas `fgetc()` is a function
- You can read the contents of a file again when necessary
  - The `rewind()` function positions the file that is specified by the file pointer argument at the beginning

**2. Reading a string from a text file**
- You can use the `fgets()` functio nto read from any file or stream
```c
char* fgets(char *str, int nchars, FILE *stream)
```
- The functio nreads a string into the memory area pointed to by `str`, from the file specified by stream
  - Characters are read until either a `\n` is read or `nchars-1` characters have been read from the stream, whichever occurs first
  - If a newline character is read, it's retained in the string
    - A `\0` character will be appended to the end of the string
  - If there is no error, `fgets()` returns the pointer, `str`
  - If there is an error, `NULL` is returned
  - Reading `EOF` causes `NULL` to be returned.

**3. Reading formatted input from a file**
- You can get formatted input from a file by using the standard `fscanf()` function
```c
int fscanf(FILE *stream, const char *format,...);
```
- The **first argument** to this function is the pointer to a `FILE` object that identifies the stream
- The **second argument** to this function is the format
  - A C string that contains one or more of the following items
    - Whitespace character
    - Non-whitespace character
    - Format specifiers
    - Usage is similar to `scanf`, but, from a file
- Function returns the number of input items successfully matched and assigned

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
