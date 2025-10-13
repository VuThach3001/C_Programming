# Section 16: Comprehensive Guide to Using Structures in C Programming

## Topic: Nested Structures in C: Definition, Usage, and Practical Examples

## Date: 11/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Nested Structures**
- C allows you to define a structure that itself contains other structures as one or more of its members
- You have seen how it is possible to logically group the month, day, and year into a structure called date
  - How about grouping the `hours`, `minutes`, and `seconds` into a structure called `time`
```c
struct time
{
  int hours;
  int minutes;
  int seconds;
};
```
- In some applications, you might have the need to group both a date and a time together
  - You might need to set up a list of events that are to occur at a particular date and time
- You want to have a convenient way to associate both the `date` and the `time` together
  - Define a new structure, called, for example, `dateAndTime`, which contains as its memebrs two elements
  - `date` and `time`
```c
struct dateAndTime
{
  struct date sdate;
  struct time stime;
};
```
- The first member of this structure is of type struct `date` and is called `sdate`
- The second member of the `dateAndTime` structure is of type struct time and is called `stime`

- Variables can now be defined to be of type struct `dateAndTime`
```c
struct dateAndTime event;
```

**2. Accessing members in a nested structure**
- To reference the `date` structure of the variable `event`, the syntax is the same as referencing any member
```c
event.sdate
```
- To reference a particular member inside one of these structures, a period followed by the member name is tacked on the end
  - The below statement sets the month of the `date` structure contained within event to October, and adds one to the seconds contained within the `time` structure
```c
event.sdate.month = 10;
++event.stime.seconds;
```
- The `event` variable can be initialized just like normal
  - Sets the `date` in the variable `event` to February 1, 2015 and sets the time to 3:30:00
```c
struct dateAndTime event = {{2, 1, 2015}, {3, 30, 0}};
```
- You can use members' names in the initialization
```c
struct dateAndTime event = 
{ {.month = 2, .day = 1, .year = 2015},
  {.hour - 3, .minutes = 30, .seconds = 0}
};
```

**3. An array of nested structures**
- It is also possible to set up an array of `dateAndTime` structures
```c
struct dateAndTime events[100];
```
- The array `events` is declared to contain 100 elements of type struct `dateAndTime`
  - The fourth `dateAndTime` contained within the array is referenced in the usual way as `events[3]`
- To set the first time in the array to noon
```c
events[0].stime.hour = 12;
events[0].stime.minutes = 0;
events[0].stime.seconds = 0;
```

**4. Declaring a structure within a structure**
- You can define the `Date` structure within the `time` structure definition
```c
struct Time
{
  struct Date
  {
    int day;
    int month;
    int year;
  } dob;
  int hour;
  int minutes;
  int seconds;
};
```
- The declaration is enclosed within the scope of the `Time` structure definition
  - It does not exist outside it
  - It becomes impossible to declare a `Date` variable external to the `Time` structure



---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
