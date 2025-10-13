# Section 5: Variables and Data Types in C: Declaration, Initialization, and Usage

## Topic: Understanding Command Line Arguments (argc, argv)

## Date: 06/06/2025

### Notes Section (Main Notes)

**1. Overview**
- There are times when a program is developed that requires the user to enter a small amount of information at the terminal
- This information might consist of a number indicating the triangular number that you want to have calculated or a word that you want to have looked up in a dictionary
- Two ways of handling this
    - Requesting the data from the user
    - Supply the information to the program at the time the program is executed (command-line arguments)
- We all know that the ```main()``` function is a special function in C
    - Entry point of the program
- When the ```main()``` is called by the runtime system, two arguments are actually passed to the function
    - The first argument (**argc: argument count**) is an integer value that specifies the number of arguments typed on the command line
    - The second argument (**argv: argument vector**) is an array of character pointers (strings)
- The first entry in this array is a pointer to the name of the program that is executing
- When you call the executed file in the command prompt, just simply type the argument next to the exeution
- Example:
```
int main(int argc, char *argv[])
{
    ...
}
``` 
```
thach@thach:~/C_Programming/project/workspaces_hardcode/46_example$ ./example <argument2> <argument3> ...
```
---

### Summary Section (Summary of Notes)

