# Section 17: Mastering File Input and Output Operations in C

## Topic: Introduction to File Input and Output: Concept, Benefits, and Overview

## Date: 12/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Overview**
- Up until this point, all data that our program accesses is via memory
  - Scope and variety of applications you can create is limited
- All serious business applications require more data than would fit into main memory
  - Also depend on the ability to process data that is persistent and stored on an external device such as a disk drive
- C provides many functions in the header file `stdio.h` for writing to and reading from external devices
  - The external device you would use for storing and retrieving data is typically a disk drive
  - However, the library will work with virtually any external storage device
- With all the examples up to now, any data that the user enters is lost once the program ends
  - If the user wants to run the program with the same data, he or she must enter it again each time
  - Very inconvenient and limits programming
  - Referred to as **volatile memory**

**2. Files**
- Programs need to store data on permanent storage
  - Non-volatile
  - Continues to be maintained after your computer is turned off
- A file can store non-volatile data and is usually stored on a disk or a solid-state device
  - A named section of storage
  - `stdio.h` is a file containing useful information
- C views a file as a continuous sequence of bytes
  - Each byte can be read individually
  - Corresponds to the file structure in the Unix environment
- A file has a beginning and an end and a current position (defined as so many bytes from the beginning)
- The current position is where any file action (read/write) will take place
  - You can move the current position to nay point in the file (even the end)

**3. Text and binary files**
- There are two ways of writing data to a stram that represents a file
  - Text
  - Binary
- **Text data** is written as a sequence of characters organized as lines (each line ends with a newline)
- **Binary data** is written as a series of bytes exactly as they appear in memory
  - Image data, music encoding - not readable
- You can write any data you like to a file
  - Once a file has been written, it just consists of a series of bytes
- You have to understand the format of the file in order to read it
  - A sequence of 12 bytes in a binary file could be 12 characters, 12 8-bit signed integers, 12 8-bit unsigned integers, etc.
  - In binary mode, each and every byte of the file is accessible

**4. Streams**
- C programs automatically open three files on your behalf
  - **standard input** - The normal input device for your system, usually your keyboard
  - **standard output** - Usually your display screen
  - **standard error** - Usually your display screen

- **standard input** is the file that is read by `getchar()` and `scanf()`
- **standard output** is used by `putchar()`, `puts()`, and `printf()`
  - Redirection causes other files to be recognized as the standard input or standard output
- The purpose of the standard error output file is to provide a logically distinct place to send error messages
- A **stream** is an abstract representation of any external source of destination for data
  - The keyboard, the command line on your display, and files on a disk are all examples of things you can work with as streams
  - The C library provides functions for reading and writing to or from data streams
    - You use the same input/output functions for reading and writing any external device that is mapped to a stream.

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
