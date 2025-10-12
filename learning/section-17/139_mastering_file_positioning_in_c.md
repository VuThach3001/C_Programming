# Section 17: Mastering File Input and Output Operations in C

## Topic: Mastering File Positioning in C: ftell(), fseek(), and fgetpos()

## Date: 13/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. File Positioning**
- For many applications, you need to be able to access data in a file other than sequential order
- There are various functions that you can use to access data in random sequence
- There are two aspects to file positioning
  - Finding out where you are in a file
  - Moving to a given point in a file
- You can access a file at a random position regardless of whether you opened the file

**2. Finding out where you are**
- You have two functions to tell you where you are in a file
  - `ftell()`
  - `fgetpos()`
```c
long ftell(FILE *pfile);
```
- This function accepts a file pointer as an argument and returns a long integer value that specifies the current position in the file
```c
long fpos = ftell(pfile);
```
- The `fpos` variable now holds the current position in the file and you can use this to return to this position at any subsequent time
  - Value is the offset in bytes from the beginning of the file

**3. fgetpos()**
- The second function providing information on the current file position is a little more complicated
```c
int fgetpos(FILE *pfile, fpost_t *position);
```
- The **first parameter** is a file pointer
- The **second parameter** is a pointer to a type that is defined in `stdio.h`
  - `fpost_t` - a type that is able to record every position within a file
- The `fgetpos()` function is designed to be used with the positioning function `fsetpos()`
- The `fgetpos()` function stores the current position and file state information for the file in position and returns `0` if the operation is successful
  - Returns a nonzero integer value for failure
```c
fpost_t here;
fgetpos(pfile, &here);
```
- The above records the current file position in the variable here
- You must declare a variable of type `fpos_t`
  - Cannot declare a pointer of type `fpos_t*` because there will not be any memory allocated to store the position data

**4. Setting a position in a file**
- As a complement to `ftell()`, you have the `fseek()` function
```c
int fseek(FILE *pfile, long offset, int origin)
```
- The **first parameter** is a pointer to the file you are positioning
- The **second** and **third parameters** define where you want to go in the file
  - **second parameter** is an offset from a reference point specified by the **third parameter**
  - Reference point can be one of three values that are specified by the predefined names
      - `SEEK_SET` - defines the beginning of the file
      - `SEEK_CUR` - defines the current position in the file
      - `SEEK_END` - defines the end of the file
- For a text mode file, the **second argument** must be a value returned by `ftell()`
- The **third argument** for text mode files must be `SEEK_SET`
  - For text files, all operations with `fseek()` are performed with reference to the beginning of the file
  - For binary files, the offset argument is simply a relative byte count
    - Can therefore supply positive or negative values for the offset when the reference point is specified as `SEEK_CUR`

**5. fsetpos()**
- You have the `fsetpos()` function to go with `fgetpos()`
```c
int fsetpos(FILE *pfile, const fpos_t *position);
```
- The first parameter is a poitner to the open file
- The second is a pointer of the `fpos_t` type
  - The position that is stored at the address was obtained by calling `fgetpos()`
```c
fsetpos(pfile, &here);
```
- The variable here was previously set by a call to `fgetpos()`
- The `fsetpos()` returns a nonzero value on error or 0 when it succeeds
- This function is designed to work with a value that is returned by `fgetpos()`
  - You can only use it to get to a place in a file that you have been before
  - `fseek()` allows you to go to any position just by specifying the appropriate offset


---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
