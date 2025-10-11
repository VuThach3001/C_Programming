# Section 16: Comprehensive Guide to Using Structures in C Programming

## Topic: Mastering Arrays of Structures and Structures Containing Arrays in C

## Date: 11/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Arrays of structures**
- You have seen how useful a structure is enabling you to logically group related elements together
  - For example, it is only necessary to keep track of one variable, instead of three, for each date that is used by the program
  - To handle 10 different dates in a program, you only have to keep track of 10 different variables, instead of 30

- A better method for handling the 10 different dates involves the combination of two powerful features of the C programming language
  - Structures and arrays.
  - It is perfectly valid to define an array of structures
  - The concept of an array of structures is a very powerful and important one in C
- Declaring an array of structures is like declaring any other kind of array
```c
struct date myDates[10];
```
- Defines an array called `myDates`, which consists of 10 elements
  - Each element inside the array is defined to be of type struct date

**2. Array of structures**
- To identify members of an array of structures, you apply the same rule used for individual structures
  - Follow the structure name with the `.` operator and then with the member name
- Referencing a particular structure element inside the array is quite natural
  - To set the second date inside the `myDates` array to August 8, 1986
```c
myDates[1].month = 8;
myDates[1].day = 8;
myDates[1].year = 1986;
```

**3. Initializing an array of structures**
- Initialization of arrays containing structures is similar to initialization of multidimensional arrays
```c
struct date myDates[5] {{12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005}};
```
- Sets the first three dates in the array myDate to `12/10/1975`, `12/30/1980`, and `11/15/2005`
- The inner pairs of braces are optional
```c
struct date myDates[5] {12, 10, 1975, 12, 30, 1980, 11, 15, 2005};
```
---
- Initializes just the third element of the array to the specified value
```c
struct date myDates[5] {[2] = {12, 10, 1975}};
```
---
- Sets just the `month` and `day` of the second element of the `myDates` array to `12` and `30`
```c
struct date myDates[5] {[1].month = 12, [1].day = 30};
```

**4. Structures containing arrays**
- It is also possible to define structures that contain arrays as members
  - Most common use is to set up an array of characters inside a structure
- Suppose you want to define a structure called `month` that contains as its members the number of days in the `month` as well as a three-character abbreviation for the `month` name

```c
struct month
{
  int numberOfDays;
  char name[3];
};
```
- This sets up a `month` structure that contains an integer member called `numberOfDays` and a character member called name
  - Member name is actually an array of three characters.

**5. Structures containing arrays**
- You can now define a variable to be of type struct `month` and set the proper fields inside `aMonth` for January
```c
struct month aMonth;

aMonth.numberOfDays = 31;
aMonth.name[0] = 'J';
aMonth.name[1] = 'a';
aMonth.name[2] = 'n';
```
- You can also initialize this variable to the same values
```c
struct month aMonth = {31, {'J','a','n'}};
```
- You can set up 12-month structures inside an array to represent each month of the year

```c
struct month months[12];
```



---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
