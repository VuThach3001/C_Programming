# Section 14: Mastering Pointer Arithmetic in C: Increment, Decrement, and Address Usage

## Topic: Actical Demonstration of Pointer Arithmetic with AddressesL Char and Long Arrays

## Date: 07/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Overview**

- We now know how arrays relate to pointers and the concept of pointer arithmetic
- These concepts can be very useful when applied to character arrays (strings)
- On of the most common applications of using a pointer to an array is as a pointer to a character string
  - The reasons are one of notational convenience and efficiency
  - Using a variable of type pointer to char to reference a string gives you a lot of flexibility
```c
void copyString (char to[], char from[])
{
    int i;
    for (i = 0; from[i] != '\0', ++i)
        to[i] = from[i];
    to[i] = '\0';
}

void copyString (char* to, char* from)
{
    for (;*from != '\0'; ++from, ++to)
        *to = *from;
    *to = '\0';
} 
```
**2. Char arrys as pointers**
- If you have an array of characters called text, you could similarly define a pointer to be used to point to elements in text.
```c
char *textPtr;
```
- If `textPtr` is set pointing to the beginning of an array of chars called text
```c
++textPtr;
```
- The above sets `textPtr` pointing to the next character in text, which is `text[1]`
```c
--textPtr;
```
- The above sets `textPtr` pointing to the previous character in text, assuming that `textPtr` was not pointing to the beginning of text prior to the execution of this statement
```c
void copyString (char *to, char *from)
{
    while (*from) // The null character is equal to the value 0, so will jump out then
        *to++ = *from++;
    *to = '\0';
}

int main (void)
{
    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);
}
```


---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
