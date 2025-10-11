# Section 16: Comprehensive Guide to Using Structures in C Programming

## Topic: Comprehensive Guide to Creating, Declaring, and Using Structures in C

## Date: 09/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Overview**
- Structures in C provide another tool for grouping elements together
  - A powerful concept that you will use in many C programs that you develop
- Suppose you want to store a date inside a program
  - We could create variables for `month`, `day`, and `year` to store the date
```c
int month = 9, day = 25, year = 2015;
```
- Suppose your program also needs to store the date of purchase of a particular item
  - You must keep track of three separate variables for each date that you use in the program
  - These variables are logically related and should be grouped together
- It would be much better if you could somehow group these sets of three variables together
  - This is precisely what the structure in C allows you to do

**2. Creating a structure**
- A structure declaration desribes how a structure is put together
  - What elements are inside the structure
- The `struct` keyword enables you to define a collection of variables of various types called a structure that you can treat as a single unit
```c
struct date
{
  int month;
  int day;
  int year;
}
```
- The above statement defines what a date structure looks like to the C compiler
  - There is no memory allocation for this declaration.
- The variable names within the date structure, `month`, `day`, and `year`, are called members or fields
  - Members of the structure appear between the braces that follow the struct tag name date

**3. Using a structure**
- The definition of date defines a new type in the language
  - Variables can now be declared to be of type struct date
```c
struct date today;
```
- you can now declare more variables of type `struct date`
```c
struct date purchaseDate;
```
- The above statement declares a variable to be of type `struct date`
  - Memory is now allocated for the variables above
  - Memory is allocated for three integer values for each variable
- Be certain you understand the difference between defining a structure and declaring variables of the particular structure type

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
