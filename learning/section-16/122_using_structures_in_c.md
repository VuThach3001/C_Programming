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

**4. Accessing members in a struct**
- After knowing how to define a structure and declare structure variables, you need to be able to refer to the members of a structure
- A structure variable name is not a poitner
  - You need a special syntax to access the members
- You refer to a member of a structure by writing the variable name followed by a period, followed by the member variable name
  - The period between the structure variable name and the member name is called the member selection operator
  - There are no spaces permitted between the variable name, the period, and the member name
```c
today.day = 25;
today.year = 2015;
```
- To test the value of month to see if it is equal to `12`
```c
if(today.month == 12)
  nextmonth = 1;
```

**5. Structures in expressions**
- When it comes to the evaluation of expressions, structure members follow the same rules as ordinary variables do
  - Division of an integer structure member by another integer is performed as an integer division
```c
century = today.year / 100 + 1;
```

**6. Defining the structure and variable at the same time**
- You do have some flexibility in defining a structure
  - It is valid to declare a variable to be of a particular structure type at the same time that the structure is defined
  - Include the variable name (or names) before the terminating semicolon of the structure definition
  - You can also assign initial values to the variables in the normal fashion
```c
struct date
{
  int month;
  int day;
  int year;
} today;
```
- In the above, an instance of the structure, called today, is declared at the same time that the structure is defined
  - `today` is a variable of type `date`.

**7. Un-named Structures**
- You also do not have to give a structure a tag name
  - If all of the variables of a particular structure type are defined when the structure is defined, the structure name can be omitted
```c
struct
{           // Structure declaration and...
  int month;
  int day;
  int year;
} today;    //...Structure variable declaration combined
```
- A disadvantage of the above is that you can no longer define further instances of the structure in another statement
  - All the variables of this structure type that you want in your program must be defined in the one statement.

**8. Initializing Structures**
- Initializing structures is similar to initializing arrays
  - The elements are listed inside a pair of braces, with each element seperated by a comma
  - The initial values listed inside the curly braces must be constant expressions.
```c
struct date today = {7, 2, 2015};
```
- Just like an array initialization, fewer values might be listed than are contained in the structure
```c
struct date date1 = {12, 10};
```
- Set `date1.month` to `12` and `date1.day` to `10` but gives no intial values to `date.year`
- You can also specify the member names in the initialization list
  - Enables you to initialize the members in any order, or to only initialize specified members

```c
.member = value

struct date date1 = {.month = 12, .dat = 10};
```
- Set just the year member of the date structure variable `today` to `2015`
```c
struct date today = {.year = 2015};
```

**9. Assignment with compound literals**
- You can assign one or more values to a structure in a single statement using what is known as compound literals

```c
today = (struct date) {9, 25, 2015};
```
- This statement can appear anywhere in the program
  - It is not a declaration statment
  - The type cast operator is used to tell the compiler the type of the expression
  - The list of values follows the cast and are to be assigned to the members of the structure, in order
  - Listed in the same way as if you were initializing a structure variable
- You can also specify values using the `.member` notation.
```c
today = (struct date) {.month = 9, .day = 25, .year = 2015};
```
- The advantage of using this approach is that the arguments can appear in any order.



---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
