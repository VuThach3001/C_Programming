# Section 4: C Programming Fundamentals: Input, Output, Preprocessing, and Comments

## Topic: Improving Code Readability: Utilizing Single-Line and Multi-Line Comments in C
## Date: 12/05/2025

---

### Cue Column (Questions, Keywords, or Prompts)

**1. Comment**
- Comments are used in a program to document a program and to enhance its readability.
- It's there to remind you, or someone else reading your code, what the program does or what a particular line of code is doing.
- Comments are ignored by the compiler.
- Comments are very useful
    - A programmer may return to a program that he coded six months ago may not remeber the purpose of a particular function of line of code.
    - A single comment can save a significant amount of time otherwise wasted on having to re-understand the code.

**2. Syntax**
- There are two ways to add comments into a C program
- By using the two characters ```/``` and ```*```
    - Marks the beginning of the comment.
    - These types of comments have to be terminated.
    - To end the comment, the characters ```*``` and ```/``` are used without any embedded spaces.
    - All characters included between the opening ```/*``` and the closing ```*/``` are treated as part of the comment.
    - Referred to as a multi-line comment.
- By using two consecutive slash characters ```//```
    - Any characters that follow these slashes up to the end of the line are ignored by the compiler.
    - Single line comment.

**3. Style**
```
/*

* Written by Vu Thach
* Copyright 2025
*/
```

- You can also embellish comments to make them stand out:
```
/********************************
* This is a very important comment *
* so please read this.
********************************/
```
- You can add a comment at the end of a line of code.
```
printf("Hello, nope!") //This line displays a quotation.
```
**4. Use of Comments**
- It is possible to insert so many comments into a program that the readability of the program is actually degraded instead of improved!
- You need to intelligently use comments
- It is a good idea to get into the habit of inserting comment statements into the program as the program is being written or typed in
    - It's easier to document the program while the particular program logic is still fresh in your mind.
    - Reap the benefits of the comments during the debug phase, when the program logic errors are being isolated and debugged.
- A comment can helps you read through the program, but it can also help point the way to the source of the logic mistake.
- Self documenting commnets by using meaningful names.
---

### Summary Section (Summary of Notes)

