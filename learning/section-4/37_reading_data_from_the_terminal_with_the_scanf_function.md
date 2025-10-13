# Section 4: C Programming Fundamentals: Input, Output, Preprocessing, and Comments

## Topic: User Input in C: Reading Data from the Terminal with the scanf Function

## Date: 15/05/2025

### Cue Column (Questions, Keywords, or Prompts)

**1. Overview**
- It's very useful to ask the user to enter data into a program
    - Via the Terminal / Console
- The C library contains several input functions, and ```scanf()``` is the most general of them
    - Can read a variety of formats
- Reads the input from the standard input stream ```stdin``` and scans that input according to the ```format``` provided.
    - Format can be a simple constants string, but you can specify ```%s```, ```%d```, ```%c```, ```%f```, etc., to read strings, integer, character or floats.
- If the ```stdin``` is input from the keyboard then text is read in because the keys generate text characters: letters, digits, and punctuation.
    - When you enter the integer 2014, you type the characters 2 0 1 and 4.
    - If you want to store that as a numerical value rather than as a string, your program has to convert the string character-by-character to a numerical value and this is the job of the ```scanf``` function.

**2. Scanf() Function**
- Like ```printf()```, ```scanf()``` uses a **control string** followed by a list of arguments
    - **Control string** indicates the destination data types for the input stream of characters.
- The ```printf()``` function uses variable names, constants, and expressions as its argument list.
- The ```scanf()``` function uses pointers to variable
    - You do not have to know anything about pointers to use the function
- Remember 3 rules about scanf
    - Returns the number of items that it successfully reads
    - If you use ```scanf()``` to read a value for one of the basic variables type, precede the variable name with an ```&```
    - If you use ```scanf()``` to read a string into a character array, don't use an ```&```.
- The ```scanf()``` function uses whitespace (newlines, tabs, and spaces) to decide how to divide the input into separate fields.    
- ```scanf()``` is the inverse of ```prinf()```, which converts integers, floating-point numbers, characters, and C strings to text that is to be displayed onscreen.
- When a program uses ```scanf``` to gather input from the keyboard, it waits for you to input some text
    - When you enter some text and press enter, then program proceeds and reads the input
- Remember, ```scanf()``` expects input in the same format as you provided ```%s``` and ```%d```
    - You have to provide valid inputs like **string integer**

**Note**: 
- ```scanf()``` sometimes doesn't work well. The main issue with ```scanf()``` is when you read in, you're only reading in until you see a **space**. When you hit the **return button** on your keyboard. It's not going to read that **return button** because it only reads up into a word and so it's not going to get the line feed. Next time, it's going to skip that line and it's going to read in the line feed. This is a problem when you write multiple ```scanfs``` in a single program on after another.
- ```scanf()``` can behave unexpectedly, especially when mixing different types of input or expecting full-line input. One common problem arises when you use ```scanf()``` to read different data types (like integers or characters) sequentially. The newline character ```(\n)``` left in the input buffer causes issues for subsequent ```scanf()``` calls

- The solution for this is to call the ```getchar()``` function to clear leftover newline right after you do a ```scanf()``` function and then you call another ```scanf()```.

- When you use the datatype ```double```, make sure to use the format ```%lf``` to get the data.

---

### Summary Section (Summary of Notes)

