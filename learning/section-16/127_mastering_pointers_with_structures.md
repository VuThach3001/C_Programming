# Section 16: Comprehensive Guide to Using Structures in C Programming

## Topic: Mastering Pointers with Structures: Syntax, Usage, and Best Practices

## Date: 11/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Structures and Pointers**
- C allows for pointers to structures
- Pointers to structures are easier to manipulate than structures themselves
- In some older implementations, a structure cannot be passed as an argument to a function, but a point to a structure can.
- Even if you can pass a structure as an argument, passing a pointer is more efficient.
- Many date representations use structures containing pointers to other structures

**2. Declaring a struct as a pointer**
- You can define a variable to be a pointer to a struct
```c
struct date *datePtr;
```
- The variable `datePtr` can be assigned just like other pointers
  - You can set it to point to `todaysDate` with the assignment statement
```c
datePtr = &todaysDate;
```
- You can then indirectly access any of the members of the date structure pointed to by `datePtr`
```c
(*datePtr).day = 21;
```
- The above has the effect of setting the day of the `date` structure pointed to by `datePtr` to `21`
  - Parentheses are required because the structure member operator `.` has higher precedence than the indirection operator `*`

**3. Using structs as pointers**
- To test the value of month stored in the `date` structure pointed to by `datePtr`
```c
if((*datePtr).month == 12)
...
```
- Pointers to structures are so often used in C that a special operator exists
  - The structure pointer operator `->`, which is the dash followed by the greater than sign, permits
```c
(*x).y
```
- To be more clearly expressed as
```c
x->y
```
- The previous if statement can be conveniently wrtitten as
```c
if(datePtr->month == 12)
...
```

**4. Structures containing pointers**
- A pointer also can be a member of a structure
```c
struct intPtrs
{
  int *p1;
  int *p2;
};
```
- A structure called `intPtrs` is defined to contain two integer pointers
  - The first one called `p1`
  - The second one `p2`
- You can define a variable of type struct `intPtrs`
```c
struct intPtrs pointers;
```
- The variable pointers can now be used just like other structs
  - Pointers itself is not a pointer, but a structure variable that has two pointers as its members

**5. Character arrays or character pointers?**
```c
struct names
{
  char first[20];
  char last[20];
};
```
OR
```c
struct pnames
{
  char * first;
  char * last;
};
```
- You can do both, however, you need to understand what is happening here
```c
struct names veep = {"Talia", "Summers"};
struct names treas = {"Brad", "Fallingjaw"};
printf("%s and %s\n", veep.first, treas.first);
```
- The struct `names` variable `veep`
  - Strings are stored inside the structure
  - Structure has allocated a total of 40 bytes to hold the two names
- The struct `pnames` variable `treas`
  - Strings are stored wherever the compiler stores string constants
  - The structure holds the two addresses, which takes a total of 16 bytes on our system
  - The structure `pnames` structure allocates no space to store strings
  - It can be used only with strings that have had space allocatede for them elsewhere
    - Such as string constants or strings in array
- The pointers in a `pnames` structure should be used only to manage strings that were created and allocated elsewhere in the program
- One instance in which it does make sense to use a pointer in a structure to handle a string is if you are dynamically allocating that memory
  - Use a pointer to store the address
  - Has the advantage that you can ask `malloc()` to allocate just the amount of space that is neede for a string
```c
struct namect
{
  char * fname; //Using pointers instead of arrays
  char *lname;
  int letters;
};
```
- Understand that the two strings are not stored in the structure
  - Stored in the chunk of memory managed by `malloc()`
  - The addresses of the two strings are stored in the structure
  - Addresses are what string-handling functions typically work with
```c
void getinfo (struct namect* pst);


int main (void)
{
    return 0;
}

void getinfo (struct namect* pst)
{
    char temp[SLEN];
    printf ("Please enter your first name.\n");
    s_gets (temp, SLEN);

    //Allocate memory to hold name
    pst->fname = (char*)malloc (strlen (temp) + 1);

    // Copy name to allocated memory
    strcpy (pst->fname, temp);
    printf ("Please enter your last name.\n");
    s_gets (temp, SLEN);
    pst->lname = (char*)malloc (strlen (temp) + 1);
    strcpy (pst->lname, temp);

}
```

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
