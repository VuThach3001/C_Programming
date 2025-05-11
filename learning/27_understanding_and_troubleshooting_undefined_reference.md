# Section 3: Fundamentals of C: Writing your first code and understanding basic syntax

## Topic: Linker errors demystified: Understanding and Troubleshooting undefined reference
## Date: 11/05/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)
 
**1. Linker Errors**
- The linker is having trouble linking all the object files together to create an executable.
- Usually there is a library or object file that is missing

```
#include <stdio.h>

extern int x;

int main(){
    printf("Total is: %d\n", x);
    return 0;
}
```
- When this file is compiled, we will have a main.object file, and in that, we will have a reference to x variable (which is defined by somebody else)
- Then the compiler can not find where to define the reference for x so it comes to the **linker error**
---

### Summary Section (Summary of Notes)

