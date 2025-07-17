# Section 10: C Strings: In-Depth Guide to Character Arrays and String Functions

## Topic: Advanced String Operations in C: Searching, Tokenizing, and Analyzing

## Date: 18/07/2025

### Notes Section (Main Notes)

**1. Overview**
- Searching a string
  - The ```string.h``` header file declares several string-searching functions for finding a single character or a substring
    - ```strchr()``` and ```strstr()```
- Tokenizing a string
  - A token is a sequence of characters within a string that is bounded by a delimiter (space, comma, period, etc)
  - Breaking a sentence into words is called tokenizing
  - ```strtok()```
- Analyzing strings
  - ```islower()```, ```isupper()```, ```isalpha()```, ```isdigit()```, etc.

**2. Concept of a pointer**
- We are going to discuss in detail, the concept of a pointer in an upcoming section
  - However, in order to understand some of these string functions, we need to have a quick peek on this concept
- C provides a remarkably useful type of variable called a **pointer**
  - A variable that stores an address
  - Its value is the address of another location in memory that can contain a value
  - We have used addresses in the past with the ```scanf()``` function.
```
int Number = 25;
int *pNumber = &Number;
```
- Above, we declared a variable, ```Number```, with the value ```25```.
- We declare a pointer, ```pNumber```, which contains the address of ```Number```
  - Asterisk ```*``` in declaring a pointer
- To get the value of the variable ```pNumber```, you can use the asterisk to dereference the pointer
  - ```*pNumber = 25```
  - ```*``` is the **dereference operator**, and its effect is to access the data stored at the address specified by a pointer
- The value of ```&Number``` is the address where ```Number``` is located
  - This value is used to initialize ```pNumber``` in the second statement
- Many of the string functions return pointers
  - This is why I wanted to briefly mention them
  - Do not worry if this concept does not sink in right now, we are going to cover points in a ton of detail in an upcoming section

**3. Searching a string for a character**
- The ```strchr()``` function searches a given string for a specified character
  - First argument to the function is the string to be searched (which will be the address of a char array)
  - Second argument is the character that you are looking for
- The function will search the string starting at the beginning and return a pointer to the first position in the string where the character is found
  - The address of this position in memory
  - Is of type ```char*``` described as the **pointer to char**
- To store the value that's returned, you must create a variabel that can store the address of a character.
- If the character is not found, the function returns a special value ```NULL```
  - ```NULL``` is the equivalent of ```0``` for a pointer and represents a pointer that does not point to anything

**4. strchr()**
- You can use the ```strchr()``` function like:
```
char str[] = "The quick brown fox"; //The string to be searched
char ch = 'q'; // The character we are looking for
char *pGot_char = NULL; // Pointer initialized to NULL
pGot_char = strchr(str, ch); // Store address where ch is found
```
- The first argument to ```strchr()``` is the address of the first location to be searched
  - Second argument is the character that is sought (ch, which is of type char)
  - Expects its second argument to be of type ```int```, so the compiler will convert the value of ```ch``` to this type
  - Could just as weill define ```ch``` as type ```int``` (```int ch = 'q'```)
  - ```pGot_char``` will point to the value ("quick brown fox")

**5. Searching for a substring**
- The ```strstr()``` function is probably the most useful of all the searching functions
  - Searches one string for the first occurence of a substring
  - Returns a pointer to the position in the first string where the substring is found
  - If no match, returns ```NULL```
- The first argument is the string that is to be searched
- The second argument is the substring you're looking for
```
char text[] = "Every dog has his day";
char word[] = "dog";
char *pFound = NULL;
pFound = strstr(text, word);
```
- Searches text for the first occurrence of the string stored in word
  - The string "dog" appears starting at the seventh character in text
  - ```pFound``` will be set to the address ```text + 6``` ("dog has his day")
  - Search is case sensitive, ```Dog``` will not be found

**6. Tokenizing a string**
- A token is a sequence of characters within a string that is bound by a delimiter
- A delimiter can be anything, but, should be unique to the string
  - spaces, commas, and a period are good examples
- Breaking a sentence into words is called **tokenizing**
- The ```strtok()``` function is used for tokenizing a string
- It requires two arguments
  - String to be tokenized
  - A string containing all the possible delimiter characters

**7. Analyzing strings**
- The argument to each of these functions is the character to be tested
- All these functions return a **nonzero** value of type ```int``` if the character is within the set that's being tested for
- Theses return values convert to ```true``` and ```false```, respectively, so you can use them as ```Boolean``` values.


---

### Summary Section (Summary of Notes)

