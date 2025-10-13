# Section 2: Installing the Necessary Development Tools and Software

## Topic: Linux Command Line Essentials: Compiling and Running C Programs on Ubuntu

## Date: 05/05/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**Compile**
- In Linux, we can use gcc to compile the code that we are coding.
- However, gcc has a lot of options, there's all sorts of different things.
- At the very basic level, you can compile a C source code by just typing in GCC and then the name of the file:
  ```
  gcc mypro.c
  ```
  - It will go without anything popped up means that your code is successfully compiled and give the **a.out** file.
  - Otherwise, if there is any error in your source code, it will prompt you to see.
- You can acutally see a lot of the various options for GCC by typing:
  ```
  gcc --help
  ```
- **a.out** file: As discussed earlier, Linux will produce a.out file as a binary executable file . So you can actually run your program now by just typing in the terminal:
  ```
  ./a.out
  ```
- You could also change the name of the object file using:
  ```
  gcc <the c file> -o <the object file name>
  ```
---

### Summary Section (Summary of Notes)

