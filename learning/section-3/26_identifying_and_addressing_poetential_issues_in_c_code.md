# Section 3: Fundamentals of C: Writing your first code and understanding basic syntax

## Topic: Compiler warnings: identifying and addressing potential issues in C code
## Date: 11/05/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)
 
**1. Compiler Warnings**
- Do not ignore them!
- The compiler has recognized an issue with your code that could lead to a potential problem.
- It is only a warning because the compiler is still able to generate correct machine code.
```
  int total;
  printf("Total is: %d\n", total);

>> warning: 'total' is used uninitialized...
```
- You can enable/disable the warnings when compiling with gcc
  - ```gcc -w main.c```: Disable all the warnings when compiling.
  - ```gcc -Wall -Wextra -Wpedantic -Werror main.c```
    - ```-Wall```: Enable all warnings.
    - ```-Wextra```: Enable additional warnings not covered by ```-Wall```
    - ```-Wpedantic```: Warns you about code that doesn't strictly follow the C standard.
    - ```-Werror```: Treats all warnings as errors (optional).
---

### Summary Section (Summary of Notes)

