# Section 17: Mastering File Input and Output Operations in C

## Topic: Opening, Closing, and Accessing Files in C: A Comprehensive Guide

## Date: 12/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Accessing Files**
- Files on disk have a name and rules for naming files are determined by your operating system
  - You may have to adjust the names depending on what OS your program is running
- A program references a file through a file pointer (or stream pointer, since it works on more than a file)
  - You associate a file pointer with a file programmatically when the program is run
  - Pointers can be reused to point to different files on different occasions.
- A file pointer points to a struct of type FILE that represents a stream
  - Contains information about the file
    - Whether you want to read or write or update the file
    - The address of the buffer in memory to be used for data
    - A pointer to the current position in the file for the next operation
  - The above is all set via input/output file operations
- If you want to use several files simultaneously in a program, you need a separate file pointer for each file
  - There is a limit to the number of files you can have open at one time
    - defined as `FOPEN_MAX` in `stdio.h`

**2. Opening a File**
- You associate a specific external file name with an internal file pointer variable through a process referred to as opening a file
  - Via the `fopen()` function
    - Returns the file pointer for a specific external file
- The `fopen()` function is defined in `stdio.h`
```c
FILE *fopen(const char * restrict name, const char * restrict mode);
```
- The **first argument** to the function is a pointer to a string that is the name of the external file you want to process
  - You can specify the name explicitly or use a char pointer that contains the address of the character string that defines the file name
  - You can obtain the file name through the command line, as input from the user, or defined as a constant in your program
- The **second argument** to the `fopen()` function is a character string that represents the file mode
  - Specifies what you want to do with the file
  - A file mode specification is a character string between double quotes
- Assuming the call to `fopen()` is successful, the function returns a pointer of type `FILE*` that you can use to reference the file in further input/output operations using other functions in the library
- IF the file cannot be opened for some reasons, `fopen()` returns `NULL`

**3. Write mode**
- If you want to write to an existing text file with the name `myfile.txt`
```c
FILE *pfile = NULL;
char* filename = "myfile.txt";
pfile = fopen(filename, "w"); // Open myfile.txt to write it
if(pfile == NULL)
  printf("Failed to open %s.\n", filename);
```
- Opens the file and associates the file with the name `myfile.txt` with your file pointer `pfile`
  - The mode as `"w"` means you can only write to the file
  - You cannot read it
- If a file with the name `myfile.txt` does not exist, the call to `fopen()` will create a new file with this name
- If you only provide the file name without any path specification, the file is assumed to be in the current directory
  - You can also specify a string that is the full path and name for the file
- On opening a file for writing, the file length is truncated to zero and the position will be at the beginning of any existing data for the first operation
  - Any data that was previously written to the file will be lost and overwritten by any write operation

**4. Append mode**
- If you want to add to an existing text file rather than overwrite it
  - Specify mode `"a"`
  - The append mode of operation
- This positions the file at the end of any previously written data
  - If the file does not exist, a new file will be created
```c
pFile = fopen("myfile.txt", "a"); // Open myfile.txt to add to it
```
- Do not forget that you should test the return value for `null` each time
- When you open a file in append mode
  - All write operations will be at the end of the data in the file on each write operation
  - All write operations append data to the file and you cannot update the existing contents in this mode

**5. Read mode**
- If you want to read a file
  - Open it will mode argument as `"r"`
  - You can not write to this file
```c
pFile = fopen("myfile.txt", "r"); // Open myfile.txt to read it
```
- This positions the file to the beginning of the data
- If you are going to read the file
  - It must already exist
- If you try to open a file for reading that does not exist, `fopen()` will return a file pointer of `NULL`
- You always want to check the value returned from `fopen()`

**6. Renaming a file**
- Renaming a file is very easy
  - Use the `rename()` function
```c
int rename(const char *oldname, const char *newname);
```
- The integer that is returned will be `0` if the name change was successful and nonzero otherwise
- The file **must not be opened** when you call `rename()`, otherwise the operation will fail
```c
if(rename("C:\\temp\\myfile.txt", "C:\\temp\\myfile_copy.txt"))
  printf("Failed to rename file.");
else
  printf("File renamed successfully");
```
- This will change the name of `myfile.txt` in the temp directory on drive C to `myfile_copy.txt`
- If the file path is incorrect or the file does not exist, the renaming operation will fail

**7. Closing a file**
- When you have finished with a file, you need to tell the operating system so that it can free up the file
  - You can do this by calling the `fclose()` function
- `fclose()` accepts a file pointer as an argument
  - Returns `EOF (int)` if an error occurs
    - `EOF` is a special character called the **end-of-file** character
    - defined in `stdio.h` as a negative integer that is usually equivalent to the value `-1`
  - `0` if successful
```c
fclose(pfile); // Close the file associated with pfile
pfile = NULL;
```
- The result of calling `fclose()` is that the connection between the pointer, `pfile`, and the physical file is broken
  - `pfile` can no longer be used to access the file
- If the file was being written, the current contents of the output buffer are written to the file to ensure that data is not lost
- It is good programming practice to close a file as soon as you have finished with it
  - Protects against output data loss
- You must also close a file before attempting to rename it or remove it.

**8. Deleting a file**
- You can delete a file by invoking the `remove()` function
  - Declare in `stdio.h`
```c
remove("myfile.txt");
```
- Will delete the file that has the name `myfile.txt` from the current directory
- The file cannot be opened when you try to delete it
- You should always double check with the operation that delete files
  - You could wreck your system if you do not


---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
